#include<stdlib.h>
#include<string.h>
#include<assert.h>

#include "config.h"
#include "event.h"
#include "mybuffer.hpp"

my_bf::my_bf() {
	mBuffer = evbuffer_new();
}

my_bf::~my_bf() {
	evbuffer_free(mBuffer);
	mBuffer = NULL;
}

int my_bf::appendBuffer(const void *buffer, int len) {
	len = len <= 0 ? strlen((char *)buffer) : len;
	
	return evbuffer_add(mBuffer, (void *)buffer, len);
}


int my_bf::appendBuffer(const my_bf *mybf) {
	return appendBuffer(mybf->getBuffer(), mybf->getSize());
}

const void *my_bf::getBuffer() const {
	((char *)(EVBUFFER_DATA(mBuffer)))[getSize()]='\0';
	return EVBUFFER_DATA(mBuffer);
}

char *my_bf::getLine() {
	return evbuffer_readline(mBuffer);
}

void my_bf::erase(int len) {
	evbuffer_drain(mBuffer, len);
}

void my_bf::reset() {
	erase(getSize());
}

int my_bf::getSize() const {
	return EVBUFFER_LENGTH(mBuffer);
}


int my_bf::read(int fd) {
	return evbuffer_read(mBuffer, fd, -1);
}

int my_bf::write(int fd) {
	return evbuffer_write(mBuffer, fd);
}

int my_bf::take(char *buffer, int len) {
	len = evbuffer_remove(mBuffer, buffer, len-1);
	buffer[len]='\0';

	return len;
}

const void *my_bf::find(const void *key, size_t len) {
	struct evbuffer * buffer = mBuffer;
	u_char * what = (u_char*)key;

	size_t remain = buffer->off;
	u_char *search = buffer->buffer;
	u_char *p;

	while (remain >= len) {
		if ((p = (u_char*)memchr(search, *what, (remain - len) + 1)) == NULL)
			break;

		if (memcmp(p, what, len) == 0)
			return (p);

		search = p + 1;
		remain = buffer->off - (size_t)(search - buffer->buffer);
	}

	return NULL;
}











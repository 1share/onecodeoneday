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

	return 0;
}


int my_bf::appendBuffer(const my_bf *mybf) {

	return 0;
}

const void *my_bf::getBuffer() const {

}

char *my_bf::getLine() {

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
	evbuffer_read(mBuffer, fd, -1);
}

int my_bf::write(int fd) {
	evbuffer_write(mBuffer, fd);
}

int my_bf::take(char *buffer, int len) {


}

const void *my_bf::find(const void *key, size_t len) {

}











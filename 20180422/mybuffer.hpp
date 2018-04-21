#ifndef __mybuffer_hpp__
#define __mybuffer_hpp__

struct evbuffer;

/* buffer */
class my_bf {
public:
	my_bf();
	~my_bf();
	
	int appendBuffer(const void *buffer, int len = 0);
	int appendBuffer(const my_bf *mybf);

	void erase(int len);	
	void reset();
	
	const void *getBuffer() const;
	char *getLine();
	int getSize() const;
	int take(char *buffer, int len);

	const void *find(const void *key, size_t len);
	

private:
	int read(int fd);
	int write(int fd);
	
	struct evbuffer *mBuffer;

};
#endif

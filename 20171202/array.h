#ifndef __ARRAY_H__
#define __ARRAY_H__
#include<iostream>
#include<cstdio>

template<typename T>
class myarray {
public:
	~myarray();
	myarray();
	myarray(int n);
	T &operator[](int n);
	const T &operator[](int n) const;
	void insert(const T &m, int n);
	void resize(int n);
	void copy(T *data, int n);

private:
	T *md;
	unsigned int msize;
	myarray(const myarray &data);
	myarray &operator=(const myarray &data);
};
#endif

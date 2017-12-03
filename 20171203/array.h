#ifndef __ARRAY_H__
#define __ARRAY_H__
#include<iostream>
#include<cstdio>

template<typename T>
class myarray {
public:
	~myarray() {delete md;}
	myarray() {md = new T(1);}
	myarray(int n) {md = new T(n);};
	T &operator[](int n) {return md[n];};
	const T &operator[](int n) const{return md[n];};
	void insert(const T &m, int n) {md[n] = m;};
	void resize(int n);
	void copy(T *data, int n);
	unsigned int getsize() {return msize;};

private:
	T *md;
	unsigned int msize;
	myarray(const myarray &data);
	myarray &operator=(const myarray &data);
};
#endif

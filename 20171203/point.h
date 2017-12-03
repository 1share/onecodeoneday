#ifndef __POINT_H__
#define __POINT_H__
#include<iostream>
#include "array.h"

template<typename T>
class point {
public:
	point():mp(0),msize(0) {};
	point(myarray<T> &data):mp(&data),msize(data.getsize()) {}	
	point(myarray<T> &data, int n):mp(&data),msize(n) {}
	T &operator*() const {
		return (*mp)[msize-1];
	}

	T operator[](int n) {
		return (*mp)[n];
	}
	
	point(const point &data):mp(data.mp),msize(data.msize) {}
	point &operator=(const point &data) {
		mp = data.mp;
		msize = data.msize;

		return *this;
	}
	
	void set(const T t) {
		(*mp)[msize] = t;
	}
	void set(const T t, int n) {
		if(n<0 || n>msize)
			throw "over range!!!";
		(*mp)[n] = t;
	}


private:
	myarray<T> *mp;
	unsigned int msize;
};
#endif

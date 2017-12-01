#ifndef __MYCOUNT__
#define __MYCOUNT__
#include<iostream>
//#include<ostream>

namespace mycode {

class mycount {
public:
	friend class smpt;
	mycount();
	mycount(const mycount &mc);	
	mycount &operator=(const mycount &mc);
	bool onlyone();
	bool makeonly();
	bool mycopy(const mycount &mc);
	~mycount();
private:
	int *p;
};
}

template<typename T>
class smpt {
public:
	smpt();
	smpt(const smpt<T> &sp);
	smpt(const T &t);
	smpt<T> &operator=(const smpt<T> &sp);
	T *get();
	T *set();
	T operator*();
	virtual ~smpt();
	friend std::ostream &operator<<(std::ostream &out, const smpt<T> &sp) {return out<<sp.point;}
private:
	T *point;
	mycode::mycount mc;
};
#endif

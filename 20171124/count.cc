#include<iostream>
#include "count.h"
#include "game.h"

mycode::mycount::mycount():p(new int(1)) {}
mycode::mycount::mycount(const mycode::mycount &mc):p(mc.p) {++*p;}
mycode::mycount & mycode::mycount::operator=(const mycode::mycount &mc) {
	++*mc.p;
	if (--*p == 0)
		delete p;
	p = mc.p;

	return *this;
}
mycode::mycount::~mycount() {
if (--*p == 0)
	delete p;
}

bool mycode::mycount::onlyone() {
	if(*p == 1)
		return true;

	return false;
}

bool mycode::mycount::mycopy(const mycode::mycount &mc) {
	++*mc.p;
	if(--*p == 0){
		delete p;
		p = mc.p;
		return true;
	}
	p = mc.p;
	return false;
}

template<typename T>
smpt<T>::smpt():point(new T) {}

template<typename T>
smpt<T>::smpt(const T &t):point(new T(t)) {}

template<typename T>
smpt<T>::smpt(const smpt &sp):point(sp.point),mc(sp.mc) {}

template<typename T>
smpt<T> &smpt<T>::operator=(const smpt<T> &sp) {
	if(mc.mycopy(sp.mc))
		delete point;

	point = sp.point;
	return *this;
}

template<typename T>
T *smpt<T>::get() {return point;}

template<typename T>
smpt<T>::~smpt() {
	if(mc.onlyone())
		delete point;
}


int main() {
    	smpt<mycode::gameboard> mb(mycode::gameboard(10,10));
      	mb.get()->setCell(6,6,8);
      	std::cout<<mb.get()->getCell(6,6).getDoubleValue()<<endl;

}


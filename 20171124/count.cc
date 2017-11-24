#include<iostream>
#include "count.h"

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





int main() {




}


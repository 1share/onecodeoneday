#ifndef __MYCOUNT__
#define __MYCOUNT__
#include<iostream>

namespace mycode {

class mycount {
	friend class smpt;
	mycount();
	mycount(const mycount &mc);	
	mycount &operator=(const mycount &mc);
	~mycount();
	int *p;
};
} 
#endif

#include<iostream>
#include "point.h"

int main() {
  	myarray<int> *a = new myarray<int>(10);
  	for(int i = 0; i < 10;i++) {
  		a->insert(i,i);
  	}
	for(int i = 0 ;i<10;i++) {
		std::cout<<(*a)[i]<<std::endl;
	}

	point<int> p(*a);
	*p = 42;

	std::cout<<std::endl;
	std::cout<<*p<<" "<<(*a)[9]<<std::endl;

	point<int> pp(*a,5);
	*pp = 43;
	std::cout<<*pp<<" "<<(*a)[4]<<std::endl;
	

}

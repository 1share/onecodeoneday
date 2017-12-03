#include<iostream>
#include "point.h"

int main() {
  	myarray<int> *a = new myarray<int>(10);
  	for(int i = 0; i < 10;i++) {
  		a->insert(i,i);
  	}
	std::cout<<"---------"<<std::endl;
	for(int i = 0 ;i<10;i++) {
		std::cout<<(*a)[i]<<std::endl;
	}

	point<int> p(*a, 10);
	*p = 42;

	std::cout<<"---------"<<std::endl;
	for(int i = 0 ;i<10;i++) {
		std::cout<<(*a)[i]<<std::endl;
	}

	std::cout<<"---------"<<std::endl;
	std::cout<<*p<<" "<<(*a)[9]<<std::endl;

	point<int> pp(*a,5);
	*pp = 43;
	std::cout<<"---------"<<std::endl;
	for(int i = 0 ;i<5;i++) {
		std::cout<<(*a)[i]<<std::endl;
	}

	std::cout<<"---------"<<std::endl;
	std::cout<<*pp<<" "<<(*a)[4]<<std::endl;
	

	point<int> ppp(*a,10);
	ppp.set(44);

	std::cout<<"---------"<<std::endl;
	for(int i = 0 ;i<10;i++) {
		std::cout<<(*a)[i]<<std::endl;
	}

	std::cout<<"---------"<<std::endl;
	std::cout<<*ppp<<" "<<(*a)[9]<<std::endl;

	point<int> pppp(*a,7);
	pppp.set(45,6);

	std::cout<<"---------"<<std::endl;
	for(int i = 0 ;i<7;i++) {
		std::cout<<(*a)[i]<<std::endl;
	}

	std::cout<<"---------"<<std::endl;
	std::cout<<*pppp<<" "<<(*a)[6]<<std::endl;
}

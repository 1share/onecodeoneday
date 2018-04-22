#include<iostream>
#include<string.h>

#include "mybuffer.hpp"

void printBuffer(my_bf &mybf) {
	std::cout<<"+++++++++++++++++++++++++++++++++++"<<std::endl;
	std::cout<<(char *)mybf.getBuffer()<<std::endl;
	std::cout<<"--------------------------"<<std::endl;
}

void printLine(my_bf &mybf) {
	std::cout<<"==================================="<<std::endl;
	std::cout<<mybf.getLine()<<std::endl;
	std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
}

int main() {
	class my_bf mybf;

	mybf.appendBuffer("abc",strlen("abc"));
	printBuffer(mybf);

	mybf.appendBuffer("abcd",strlen("abcd"));
	printBuffer(mybf);

	mybf.appendBuffer("abcde",strlen("abcde"));
	printBuffer(mybf);

	mybf.appendBuffer("\n",strlen("\n"));
	printBuffer(mybf);

	mybf.appendBuffer("123\n",strlen("123\n"));
	printBuffer(mybf);

	mybf.appendBuffer("1234\n",strlen("1234\n"));
	printBuffer(mybf);

	mybf.appendBuffer("12345\n",strlen("12345\n"));
	printBuffer(mybf);
	printLine(mybf);
	printLine(mybf);
	printLine(mybf);
	printLine(mybf);

	return 0;
}

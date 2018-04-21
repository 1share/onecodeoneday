#include<iostream>

#include "myutils.hpp"

void printValues(my_al &myal) {
	std::cout<<"+++++++++=+++++++++++++++++++++++++"<<std::endl;
	std::cout<<"maxcount:"<<myal.getMaxCount()<<std::endl;
	std::cout<<"count:"<<myal.getCount()<<std::endl;
	int i;
	for(i = 0; i < myal.getCount(); i++) {
		std::cout<<"value of index "<<i<<" is:"<<reinterpret_cast<const char *>(myal.getValue(i))<<std::endl;
	}
	std::cout<<"--------------------------"<<std::endl;
}

int main() {
	class my_al myal(5);

//	private	
//	class my_al a(myal);
//	class my_al b=a;

	printValues(myal);

	myal.appendValue(const_cast<char *>("abc"));
  	myal.appendValue(const_cast<char *>("abcd"));
  	myal.appendValue(const_cast<char *>("abcde"));
  	myal.appendValue(const_cast<char *>("abcdef"));
  	myal.appendValue(const_cast<char *>("abcdefg"));
	printValues(myal);

  	myal.appendValue(const_cast<char *>("abcdefgh"));
	printValues(myal);

	myal.takeValue(3);	
	printValues(myal);

	return 0;
}

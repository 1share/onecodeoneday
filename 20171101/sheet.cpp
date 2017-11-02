#include<iostream>
#include<sstream>
#include "sheet.h"

using namespace std;

string cell::double2string(double value) {
	ostringstream oss;
	oss<<value;
	
	return oss.str();
}

double cell::string2double(const string str) {
	double t;
	istringstream iss(str);
	iss>>t;

	if(!iss.eof() || iss.fail())
		return 0;
	
	return t;
}



int main() {
	cout<<"sheet"<<endl;

  	return 0;
}



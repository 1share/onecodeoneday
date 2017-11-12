#include<iostream>
#include<string>
#include "employ.h"

using namespace std;

employ::employ() {

}

employ::~employ() {

}

employ &employ::setFirstName(const string fname) {
	mfname = fname;
	
	return *this;
}

employ &employ::setSecondName(const string sname) {
	msname = sname;

	return *this;
}

employ &employ::setNumber(const long number) {
	mnumber = number;

	return *this;
}

employ &employ::setSalary(const long salary) {
	msalary = salary;

	return *this;
}

const string &employ::getFirstName() const {
	return mfname;
}

const string &employ::getSecondName() const {
	return msname;
}

const long &employ::getNumber() const {
	return mnumber;
}

const long &employ::getSalary() const {
	return msalary;
}

void employ::showEmployInfo() const{
	cout<<"FirstName"<<getFirstName()<<endl;
	cout<<"SencondName:"<<getSecondName()<<endl;
	cout<<"Number:"<<getNumber()<<endl;
	cout<<"Salary:"<<getSalary()<<endl;
}


int main() {
	employ myep;

	string s1,s2;
	long number, salary;

	cin>>s1>>s2;
	cin>>number;
	cin>>salary;
	
	myep.setFirstName(s1).setSecondName(s2).setNumber(number).setSalary(salary).showEmployInfo();

}

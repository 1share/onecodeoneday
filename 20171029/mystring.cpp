#include<iostream>
#include<string>
#include<cstring>
#include "mystring.h"

using namespace std;

mystring::mystring() {
	mstr = new char[1];
	mlen = 4;
	mstr[0] = '0';
}

mystring::mystring(const char *str) {
	mlen = strlen(str);
	mstr = new char[mlen+1];
	strcpy(mstr, str);
}

mystring::mystring(const mystring &str) {
	mlen = str.mlen;
	mstr = new char[mlen+1];
	strcpy(mstr, str.mstr);
}

mystring::mystring(const string &str) {
	mlen = str.length();
	mstr = new char[mlen+1];
	strcpy(mstr, str.c_str());
}

mystring::~mystring() {
	delete [] mstr;
}

mystring &mystring::operator=(const mystring &str) {
	if(this == &str)
		return *this;
	delete mstr;
	mlen = str.mlen;
	mstr = new char[mlen+1];
        strcpy(mstr, str.mstr);

	return *this;
}

mystring &mystring::operator=(const char *str) {
	delete mstr;
	mlen = strlen(str);
        mstr = new char[mlen+1];
        strcpy(mstr, str);

	return *this;
}

mystring &mystring::operator=(const string &str) {
	delete mstr;
	mlen = str.length();
        mstr = new char[mlen+1];
        strcpy(mstr, str.c_str());

	return *this;
}

char &mystring::operator[](int i) {	
	return mstr[i];
}

const char &mystring::operator[](int i) const {
        return mstr[i];
}

bool operator<(const mystring &str1, const mystring &str2) {
	return strcmp(str1.mstr, str2.mstr)<0;
}

bool operator>(const mystring &str1, const mystring &str2) {
	return str2<str1;
}

bool operator==(const mystring &str1, const mystring &str2) {
	return strcmp(str1.mstr, str2.mstr)==0;
}

ostream & operator<<(ostream &os, const mystring &str) {
	os<<str.mstr;

	return os;
}

istream & operator>>(istream &is, mystring &str) {
	char t[1024];	
	is.get(t,1024);

	if(is)
		str = t;

	return is;

}

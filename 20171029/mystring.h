#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class mystring {
public:
	mystring();
	mystring(const char *str);
	mystring(const string &str);	
	mystring(const mystring &str);
	~mystring();
	
	int length() const { return mlen; };	
	mystring& operator=(const mystring &str);
	mystring& operator=(const string &str);
	mystring& operator=(const char *str);

	char & operator[](int i);
	const char & operator[](int i) const;

	friend bool operator<(const mystring &str1, const mystring &str2);
	friend bool operator>(const mystring &str1, const mystring &str2);
	friend bool operator==(const mystring &str1, const mystring &str2);
	friend ostream & operator<<(ostream &os, const mystring &str);
	friend istream & operator>>(istream &is, mystring &str);
	

private:
	char *mstr;
	int mlen;
};



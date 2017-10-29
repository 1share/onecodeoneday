#include<iostream>
#include<cstring>
#include<string>
#include "mystring.h"

int main() {
	mystring name;
	string s("abcd1234");
	const char *str = "ABCD1234";
	mystring k(str);
  	cout<<"k:"<<k<<" index=3:"<<k[3]<<endl;

  	name = s;
  	cout<<"name:"<<name<<endl;
	
	cout<<(k==name)<<(k>name)<<(k<name)<<endl;

  	name = str;
  	cout<<"name:"<<name<<endl;

	cin>>name;
	cout<<"name:"<<name<<endl;

	mystring n;
	n = name;
	cout<<"n:"<<n<<endl;

	return 0;
}

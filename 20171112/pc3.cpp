#include<iostream>
using namespace std;

class parent {
public:
	parent() {cout<<1<<endl;};
	~parent() {cout<<11<<endl;};
};

class some {
public:
	some() {cout<<2<<endl;};
	~some() {cout<<22<<endl;};
};

class child:public parent {
public:
	child(){cout<<3<<endl;};
	~child(){cout<<33<<endl;};
protected:
	some msome;
};

int main() {
	parent *p = new child();
	delete p;

	return 0;
}


#include<iostream>
using namespace std;

class parent {
public:
	parent() {cout<<1<<endl;};
	void p() {cout<<"parent"<<endl;};
	virtual ~parent() {cout<<11<<endl;};
};

class some {
public:
	some() {cout<<2<<endl;};
	void s() {cout<<"some"<<endl;};
	virtual ~some() {cout<<22<<endl;};
};

class child:public parent,public some {
public:
	child(){cout<<3<<endl;};
	~child(){cout<<33<<endl;};
};

int main() {
	child *p = new child();
	p->p();
	p->s();
	delete p;

	return 0;
}


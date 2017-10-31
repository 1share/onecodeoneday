#include<iostream>

using namespace std;

class A {
public:
	A() {
		a1=1;
		a2=2;
		a3=3;
	}

	void fun() {
		cout<<"a1:"<<a1<<endl;
		cout<<"a2:"<<a2<<endl;
		cout<<"a3:"<<a3<<endl;
	}
	
	int a1;

protected:
	int a2;

private:
	int a3;
};

class B : public A {
public:
	int a1;
	B(int v) {
		A();
  		a1 = v;
	}
	void fun() {
		cout<<"a1:"<<a1<<endl;
		cout<<"a2:"<<a2<<endl;
		//cout<<"a3:"<<a3<<endl;
	}
};


int main() {
	B itemb(100);
	itemb.fun();
	itemb.a1=10;
	//itemb.a2=20;
	//itemb.a3=30;
	itemb.fun();

	return 0;
}



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
		cout<<"A::a1:"<<A::a1<<endl;
		cout<<"a2:"<<a2<<endl;
	}
};


int main() {
	A itema;
	B itemb(100);

	cout<<"sizeof A:"<<sizeof(A)<<endl;
	cout<<"sizeof B:"<<sizeof(B)<<endl;

	itemb.fun();


	return 0;
}



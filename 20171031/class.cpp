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


int main() {
	A itema;
	itema.a1=10;
//	itema.a2=20;
//	itema.a3=30;
	itema.fun();

	return 0;
}



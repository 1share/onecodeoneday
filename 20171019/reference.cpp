#include<iostream>
using namespace std;

int ref1(int n) {
	n = n * n;

	return n;
}


int ref2(const int &n) {
	int m = n * n;

	return m;
}

int ref3(int *n) {
	*n = *n * *n;

	return *n;
}


int ref4(int &n) {
	n = n * n;

	return n;
}



int main() {
	int n = 5;

	cout<<n<<endl;
	cout<<ref1(n)<<endl;
	cout<<n<<endl;
	cout<<ref2(n)<<endl;
	cout<<n<<endl;
	cout<<ref3(&n)<<endl;
	cout<<n<<endl;
	cout<<ref4(n)<<endl;
	cout<<n<<endl;

	return 0;
}


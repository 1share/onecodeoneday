#include<iostream>

using namespace std;

class t {
public:
	t(){cout<<"start"<<endl;};
	~t(){cout<<"end"<<endl;};
};

t myt;

int main() {
	cout<<"Hello World"<<endl;

	return 0;
}


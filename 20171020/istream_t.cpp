#include<iostream>
#include<fstream>
using namespace std;

void fstream_ops() {
	ifstream ifs;

	ifs.open("/tmp/fs.txt",ifstream::in);

	char c = ifs.get();

	while(ifs.good()) {
		cout<<c;
		c = ifs.get();
	}

	ifs.close();
}




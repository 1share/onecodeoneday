#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void fstream_init() {
	string ifile("i.txt"), ofile("o.txt");
	ifstream infile(ifile.c_str());

	cout<<infile.good()<<infile.eof()<<infile.fail()<<infile.bad()<<endl;
	
	infile.open("tmp/i.txt");
	char c = infile.get();

	while(!infile.eof()) {
		cout<<c;
		c = infile.get();
	}

	cout<<infile.good()<<infile.eof()<<infile.fail()<<infile.bad()<<endl;
	
	ofstream outfile(ofile.c_str());
	outfile<<"abcd1234"<<endl;
	cout<<outfile.good()<<outfile.eof()<<outfile.fail()<<outfile.bad()<<endl;

	infile.close();
	outfile.close();

}

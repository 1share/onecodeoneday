#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void fstream_init() {
	string ifile("i.txt");
	ifstream infile(ifile.c_str());
	cout<<infile.good()<<infile.eof()<<infile.fail()<<infile.bad()<<endl;
	infile.open("tmp/i.txt");
	char c = infile.get();
	while(!infile.eof()) {
		cout<<c;
		c = infile.get();
	}
	cout<<infile.good()<<infile.eof()<<infile.fail()<<infile.bad()<<endl;
	infile.close();


	string ofile("o.txt");	
	ofstream outfile(ofile.c_str());
	outfile<<"abcd1234"<<endl;
	cout<<outfile.good()<<outfile.eof()<<outfile.fail()<<outfile.bad()<<endl;
	string file("tmp/io.txt");	
	fstream iofile(file.c_str());
	outfile.close();


	iofile<<"1234abcd"<<endl;
	cout<<iofile.good()<<iofile.eof()<<iofile.fail()<<iofile.bad()<<endl;
	iofile.seekp(ios::beg);
	c = iofile.get();
	while(!iofile.eof()) {
		cout<<c;
		c = iofile.get();
	}
	cout<<iofile.good()<<iofile.eof()<<iofile.fail()<<iofile.bad()<<endl;
	iofile.close();

}

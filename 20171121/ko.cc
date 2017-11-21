#include<iostream>
#include<fstream>
#include "person.pb.h"

using namespace std;

int main() {
	fstream input("myfile",ios::in | ios::binary);
	Person person;
	person.ParseFromIstream(&input);
	cout << "Name: " << person.name() << endl;
	cout << "E-mail: " << person.email() << endl;

}

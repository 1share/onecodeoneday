#include<iostream>
#include<fstream>
#include "person.pb.h"

using namespace std;

int main() {
	Person person;
	person.set_name("John Doe");
	person.set_id(1234);
	person.set_email("jdoe@example.com");
	fstream output("myfile",ios::out|ios::binary);
	person.SerializeToOstream(&output);
	output.close();

	//Person person;
	fstream input("myfile",ios::in | ios::binary);
	person.ParseFromIstream(&input);
	cout << "Name: " << person.name() << endl;
	cout << "E-mail: " << person.email() << endl;
	input.close();

}

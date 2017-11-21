#include<iostream>
#include<fstream>
#include "person.pb.h"

using namespace std;

int main() {
	Person person;
	person.set_name("John Doe");
	person.set_id(1234);
	person.set_email("jdoe@example.com");

	Person_PhoneNumber *pn;
	pn = person.add_phone();	
	pn->set_number("11111");
	pn->set_type(Person_PhoneType_WORK);

	pn = person.add_phone();	
	pn->set_number("22222");
	pn->set_type(Person_PhoneType_HOME);

	pn = person.add_phone();	
	pn->set_number("33333");
	pn->set_type(Person_PhoneType_MOBILE);

	fstream output("myfile",ios::out|ios::binary);
	person.SerializeToOstream(&output);
	output.close();

	//Person person;
	fstream input("myfile",ios::in | ios::binary);
	person.ParseFromIstream(&input);
	cout << "Name: " << person.name() << endl;
	cout << "E-mail: " << person.email() << endl;
	cout << "Phone size: " << person.phone_size() <<endl;
	for(int i = 0; i < person.phone_size(); i++) {
		Person_PhoneNumber phone = person.phone(i);
		cout << "Number: " << phone.number() <<endl;
		cout << "Type: " << phone.type() <<endl;

	}
	
	input.close();

}

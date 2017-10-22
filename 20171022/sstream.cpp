#include<iostream>
#include<sstream>

using namespace std;

void sstream_ops() {
	string line, word;
	int count = 0;

	while(getline(cin, line)) {
		if(2==count) {
			break;
		}

		cout<<"line:"<<line<<endl;

		stringstream s(line);
		cout<<"getline:"<<s.str()<<endl;
		while(s>>word) {
			cout<<"word:"<<word<<endl;
		}

		count++;
	}

}


void iostream_ops() {
	int v1=100,v2=200;
	ostringstream os;

	os<<"v1: "<<v1<<" v2: "<<v2;
	
	cout<<os.str()<<endl;

	istringstream is(os.str());
	string s1,s2;

	is>>s1>>v1>>s2>>v2;

	cout<<s1<<v1<<s2<<v2<<endl;
}


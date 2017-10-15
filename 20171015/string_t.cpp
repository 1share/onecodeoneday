#include<iostream>
using namespace std;

void string_init() {
	string s1 = "abcd1234";
	cout<<"s1:"<<s1<<endl;

	string s2(s1);
	cout<<"s2(s1):"<<s2<<endl;

	string s3("abcd1234");
	cout<<"s3:"<<s3<<endl;

	string s4(10, '1');
	cout<<"s4:"<<s4<<endl;

	string s;
	cout<<"input string to display, and you can press 'end' to finish input!\n";
	while(cin>>s) {
		if(s[0] == 'q')
			break;
		cout<<"s:"<<s<<endl;
	}

	string line;
	cout<<"input lines to display, and you can press 'end' to finish input!\n";
	while(getline(cin, line)) {
		if(line[0] == 'q')
			break;
		cout<<"line:"<<line<<endl;
	}

	return;
}



void string_ops() {




}




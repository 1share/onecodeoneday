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

#if 0
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
#endif

	return;
}



void string_ops() {
	string s1("abcd1234");
	string s2="abcd1234";
	string s3(s1);
	string s4(10,'a');
	string s5;

	cout<<"is s1 empty? "<<s1.empty()<<". "<<"is s5 empty? "<<s5.empty()<<". "<<endl;
	cout<<"size of s1:"<<s1.size()<<" size of s4:"<<s4.size()<<endl;

	cout<<"s2[3] is :"<<s2[3]<<endl;
	cout<<"s3+s4:"<<s3+s4<<endl;
	s5=s4;
	cout<<"s5(=s4):"<<s5<<endl;

	cout<<"is s1=s2?"<<(s1==s2)<<". "<<"is s1=s3?"<<(s1==s3)<<". "<<"is s4=s5?"<<(s4==s5)<<"."<<endl;
	cout<<"is s4>s1?"<<(s4>s1)<<endl;












}




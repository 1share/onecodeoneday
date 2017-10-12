#include<iostream>
#include<string>

using namespace std;

string change(string &s) {
	int i;
	string d;
	int l=0,lm=0,g=0;

	for(i=0;i<s.size();i++) {
		if(s[i]>='0' && s[i]<='9') {
			l++;	
		} else {
			if(l>lm) {
				lm=l;
				g=i-lm;
			}
			l=0;
		}
	}

	for(i=g;i<lm+g;i++) {
		d.push_back(s[i]);
	}

	return d;
}


int main() {
	string s = "abcd12345ed125ss1239aa";

	cout<<change(s)<<endl;
}

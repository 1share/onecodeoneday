#include<iostream>
#include<set>
using namespace std;

void set_init(set<int> &s) {
	int a[] = {1,3,5,7,3,5,9,2,4,6,8,0};
	
	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
  		s.insert(a[i]);
	}
}

void print_set(set<int> &s, string str) {
	set<int>::iterator it;

	cout<<"-----------------------"<<endl;
	cout<<s.size()<<endl;
	cout<<"-----------------------"<<endl;
	for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout<<str<<*it<<endl;
	}
}

void set_ops() {
	set<int> s;
	set_init(s);

	cout<<"-----------------------"<<endl;
	cout<<s.size()<<endl;
	print_set(s, "member:");

	set<int>::iterator it = s.find(5);
	s.erase(it);
	print_set(s, "after erase1:");
	s.erase(s.find(6));
	print_set(s, "after erase2:");

	s.clear();

	cout<<"-----------------------"<<endl;
	cout<<s.size()<<endl;

}




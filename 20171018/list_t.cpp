#include<iostream>
#include<list>
using namespace std;

void list_init(list<int> &l, int flag) {
	int a[] = {1,3,5,7,3,5,9,2,4,6,8,0};

	if(flag == 0)
		for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
			l.push_back(a[i]);
		}
	else {
		for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
			l.push_front(a[i]);
		}
	}
}

void print_list(list<int> &l, string str) {
	list<int>::iterator it;

	cout<<"-----------------------"<<endl;
	cout<<l.size()<<endl;
	cout<<"-----------------------"<<endl;
	for(list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout<<str<<*it<<endl;
	}
}

void list_ops() {
	list<int> l,l1,l2;
	list_init(l1, 0);
	list_init(l2, 1);

	l.assign(l1.begin(),l1.end());
	//l.assign(l2.begin(),l2.end());

	cout<<"-----------------------"<<endl;
	cout<<l.size()<<endl;
	cout<<"front:"<<l.front()<<endl;
	cout<<"back:"<<l.back()<<endl;
	print_list(l, "list:");

	l.insert(++l.begin(), 9);
	l.insert(--l.end(), 1);
	print_list(l, "after insert:");

	l.erase(++l.begin());
	l.erase(--l.end());
	print_list(l, "after erase:");

	l.pop_back();
	print_list(l, "after popback:");
	
	l.pop_front();	
	print_list(l, "after popfront:");

	l.clear();

	cout<<"-----------------------"<<endl;
	cout<<l.size()<<endl;

}




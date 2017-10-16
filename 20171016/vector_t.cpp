#include<iostream>
#include<vector>
using namespace std;

void vector_init() {
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	vector<int> v;
	vector<int>::iterator it;
	vector<int>::reverse_iterator rit;

	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		v.push_back(a[i]);
	}

	for(it = v.begin();it != v.end(); it++) {
		cout<<"normal:"<<*it<<endl;
	}
	
	for(rit = v.rbegin();rit != v.rend(); rit++) {
		cout<<"reverse:"<<*rit<<endl;
	}

}

void vector_ops() {
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	vector<int> v;
	vector<int>::iterator it;

	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		v.push_back(a[i]);
	}

	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		cout<<v.at(i)<<endl;
	}

	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		cout<<v[i]<<endl;
	}

	cout<<v.size()<<endl;
	cout<<v.max_size()<<endl;
	cout<<v.capacity()<<endl;

	v.resize(17);

	cout<<v.size()<<endl;
	cout<<v.max_size()<<endl;
	cout<<v.capacity()<<endl;

	int sum = 0;
	while(!v.empty()) {
		sum+=v.back();
		v.pop_back();
	}
	cout<<"sum:"<<sum<<endl;


}


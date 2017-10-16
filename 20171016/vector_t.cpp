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
	
	cout<<"------------------------"<<endl;
	for(it = v.begin();it != v.end(); it++) {
		cout<<"normal:"<<*it<<endl;
	}
	
	cout<<"------------------------"<<endl;
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

	cout<<"------------------------"<<endl;
	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		cout<<v.at(i)<<endl;
	}

	cout<<"------------------------"<<endl;
	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		cout<<v[i]<<endl;
	}

	cout<<"------------------------"<<endl;
	cout<<v.size()<<endl;
	cout<<v.max_size()<<endl;
	cout<<v.capacity()<<endl;

	v.resize(17);

	cout<<"------------------------"<<endl;
	cout<<v.size()<<endl;
	cout<<v.max_size()<<endl;
	cout<<v.capacity()<<endl;

	cout<<"------------------------"<<endl;
	int sum = 0;
	while(!v.empty()) {
		sum+=v.back();
		v.pop_back();
	}
	cout<<"sum:"<<sum<<endl;

	cout<<"------------------------"<<endl;
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	cout<<v.size()<<endl;
	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		cout<<v[i]<<endl;
	}

		
	cout<<"------------------------"<<endl;
	v.erase(v.begin()+8);
	for(int i = 0; i<v.size();i++) {
		cout<<v[i]<<endl;
	}

	cout<<"------------------------"<<endl;
	v.erase(v.begin()+2,v.end()-2);
	for(int i = 0; i<v.size();i++) {
		cout<<v[i]<<endl;
	}

	cout<<"------------------------"<<endl;
	cout<<v.front()<<"|"<<v.back()<<endl;
	
	cout<<"------------------------"<<endl;
	v.insert(v.begin(),3,10);
	for(int i = 0; i<v.size();i++) {
		cout<<v[i]<<endl;
	}
	
	cout<<"------------------------"<<endl;
	v.insert(v.end(),3,20);
	for(int i = 0; i<v.size();i++) {
		cout<<v[i]<<endl;
	}

}


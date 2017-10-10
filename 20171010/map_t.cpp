#include<iostream>
#include<map>
using namespace std;

void map_t() {
	int sum(0);
	map<int,int> m; 
	map<int,int>::iterator it;
	int i;

	for(i=1;i<=100;i++) {
		m[i]=2 * i;
	}
	
	cout<<m.size()<<endl;

	for(it=m.begin();it!=m.end();it++) {
//		cout<<"k:"<<it->first<<" v:"<<it->second<<endl;
		sum += it->second;
	}
	
	cout<<sum<<endl;	
}

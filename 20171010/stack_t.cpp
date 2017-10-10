#include<iostream>
#include<stack>
#include<map>
#include<utility>
using namespace std;

void stack_t() {
	int sum(0);
	stack<int> s;
	int i;

	for(i=1;i<=100;i++) {
		s.push(i);
	}
	
	cout<<s.size()<<endl;

	while(!s.empty()) {
		sum+=s.top();
		s.pop();
	}
		
	cout<<sum<<endl;	
}

void stack_t2() {
	int sum(0);
	pair<int,int> p;
	stack< pair<int,int> > s;
	int i;

	for(i=1;i<=100;i++) {
		p=make_pair(i, 2*i);
		s.push(p);
	}
	
	cout<<s.size()<<endl;

	while(!s.empty()) {
		p = s.top();
		//cout<<p.first<<"|"<<p.second<<endl;
		sum+=p.second;
		s.pop();
	}
		
	cout<<sum<<endl;	
}


#include<iostream>
#include<stack>
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

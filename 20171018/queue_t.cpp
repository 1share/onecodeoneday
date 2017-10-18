#include<iostream>
#include<queue>
using namespace std;

static void queue_init(queue<int> &q) {
	int a[] = {1,3,5,7,3,5,9,2,4,6,8,0};

	for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
		q.push(a[i]);
	}
}

static void print_queue(queue<int> &q, string str) {
	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
	cout<<"-----------------------"<<endl;
	while(!q.empty()){
		cout<<str<<" front:"<<q.front()<<endl;
		q.pop();
	}
	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
}

void queue_ops() {
	queue<int> q;
	queue_init(q);

	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
	cout<<"front:"<<q.front()<<endl;
	cout<<"back:"<<q.back()<<endl;
	print_queue(q, "queue:");

	q.push(9);
	print_queue(q, "after push:");

	
}




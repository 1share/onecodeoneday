#include<iostream>
#include<deque>
using namespace std;

static void deque_init(deque<int> &q, int flag) {
	int a[] = {1,3,5,7,3,5,9,2,4,6,8,0};

	if(flag == 0) {
		for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
			q.push_back(a[i]);
		}
	}else{
		for(int i = 0; i<sizeof(a)/sizeof(int);i++) {
			q.push_front(a[i]);
		}

	}
}

static void print_deque(deque<int> &q, string str, int flag) {
	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
	cout<<"-----------------------"<<endl;
	if(flag==0) {
		while(!q.empty()){
			cout<<str<<" front:"<<q.front()<<endl;
			q.pop_front();
		}
	}else{
		while(!q.empty()){
			cout<<str<<" back:"<<q.back()<<endl;
			q.pop_back();
		}

	}
	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
}

void deque_ops() {
	deque<int> q,q1,q2;
	deque_init(q1, 0);
	q=q1;

	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
	cout<<"front:"<<q.front()<<endl;
	cout<<"back:"<<q.back()<<endl;
	print_deque(q, "deque:", 0);

	q.push_back(9);
	print_deque(q, "after push back:", 0);

	deque_init(q2, 1);
	q=q2;
	cout<<"-----------------------"<<endl;
	cout<<q.size()<<endl;
	cout<<"front:"<<q.front()<<endl;
	cout<<"back:"<<q.back()<<endl;
	print_deque(q, "deque:", 1);

	q.push_front(9);
	print_deque(q, "after push front:", 1);
	
}




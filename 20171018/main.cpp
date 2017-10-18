#include<iostream>
#include<set>
#include<list>
using namespace std;

extern void set_ops();
extern void list_ops();
extern void queue_ops();
extern void deque_ops();

int main() {

	set_ops();
	
	list_ops();

	queue_ops();

	deque_ops();

	return 0;
}

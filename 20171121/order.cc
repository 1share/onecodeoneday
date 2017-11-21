#include<iostream>
#include<string>
#include "order.pb.h"

using namespace std;


int main() {
	//SerializeToString
	Order order;
	order.set_time(123456);
	order.set_userid(123);
	order.set_price(100.0f);
	order.set_desc("a test order");
	string sOrder;
	order.SerializeToString(&sOrder);

	//ParseFromString
	//string sOrder;
	//Order order;
	if(order.ParseFromString(sOrder)) 
	{
		cout 	<< "userid:" << order.userid() << endl
			<< "desc:" << order.desc() << endl 
			<< "price:" << order.price() << endl 
			<< "time:" << order.time() << endl;
	}
	else
	{
		cerr << "parse error!" << endl;
	}



}

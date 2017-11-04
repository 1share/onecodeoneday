#include<iostream>
#include "clock.h"

using namespace std;

int main() {
	clock mclock;
	int h,m;

	while(cin>>h>>m) {
		if(h<0 || m<0) break;
		mclock.seth(h).setm(h).getA();
		mclock.show();
	}	

	return 0;
}




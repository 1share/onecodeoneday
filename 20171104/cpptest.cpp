#include<iostream>
#include<iomanip>
#include "mclock.h"

using namespace std;

int main() {
	mclock clock;
	int h,m;

	while(cin>>h>>m) {
		if(h<0 || m<0) break;
		clock.seth(h).setm(m).getA();
		clock.show();
	}	

	return 0;
}




#include<iostream>
#include<iomanip>
#include "mclock.h"

using namespace std;

mclock::mclock():mh(0),mm(0),diff(0.0) {

}

mclock::~mclock() {

}

mclock& mclock::seth(int h) {
	mh = h % 12;

	return *this;
}

mclock& mclock::setm(int m) {
	mm = m % 60;

	return *this;
}

int mclock::geth() {
	return mh;
}

int mclock::getm() {
	return mm;
}

void mclock::getA() {
	diff = ((mh*30+mm/60.0*30) - mm*6);

	if(diff<0) diff = - diff;
}

void mclock::show() {
	cout.fill('0');
	cout<<setw(2)<<mh<<":";
	cout<<setw(2)<<mm<<'|';
	cout<<diff<<endl;

} 






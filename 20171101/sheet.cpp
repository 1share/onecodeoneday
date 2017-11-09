#include<iostream>
#include<sstream>
#include "sheet.h"

using namespace std;

string cell::double2string(double value) {
	ostringstream oss;
	oss<<value;
	
	return oss.str();
}

double cell::string2double(const string str) {
	double t;
	istringstream iss(str);
	iss>>t;

	if(!iss.eof() || iss.fail())
		return 0;
	
	return t;
}

cell::cell():mvalue(0),mstr("") {

}

cell::~cell() {

}

cell::cell(double v):mvalue(v),mstr(double2string(v)) {

}

cell::cell(string s):mstr(s),mvalue(string2double(s)) {

}

cell &cell::operator=(const cell &data) {
	mvalue = data.mvalue;
	mstr = data.mstr;

	return *this;
}

void cell::setDoubleValue(double v) {
	mvalue = v;
	mstr = double2string(v);
}

void cell::setStringValue(string s) {
	mstr = s;
	mvalue = string2double(s);
}

string &cell::getStringValue() {
	return mstr;
}

double cell::getDoubleValue() {
	return mvalue;
}

cell &cell::operator+(const cell &data) {
	mvalue += data.mvalue;
	mstr = mstr + data.mstr;

	return *this;
}


sheet::sheet(int w, int h):mw(w>default_width?default_width:w),mh(mh>default_high?default_high:high) {
	mcell = new cell*[mw];

	for(int i=0;i<mw;i++) {
		mcell[i] = new cell[mh];
	}
}

sheet::~sheet() {
	for(int i=0;i<mw;i++) {
		delete [] mcell[i];
	}
	delete [] mcell;
}

sheet::sheet(const sheet &data) {
	mw = data.mw;
	mh = data.mh;

	mcell = new cell*[mw]
	for(int i=0;i<mw;i++) {
		mcell[i]=new cell[mh];
	}

	for(int i=0;i<mw;i++) {
		for(int j=0;j<mh;j++) {
			mcell[i][j]=data.mcell[i][j];
		}
	}
}

sheet &sheet::operator=(const sheet &data) {
	if(*this = data) {
		return *this;
	}

	for(int i=0;i<mw;i++) {
		delete [] mcell[i];
	}
	delete mcell;

	mw = data.mw;
	mh = data.mh;

        mcell = new cell*[mw]
        for(int i=0;i<mw;i++) {
                mcell[i]=new cell[mh];
        }

        for(int i=0;i<mw;i++) {
                for(int j=0;j<mh;j++) {
                        mcell[i][j]=data.mcell[i][j];
                }
        }

	return *this;
}

void sheet::setCell(int x, int y, const sheet &cell) {
	if(!inRange(x, mw) || !inRange(y, mh)) {
		cout<<"parm error"<<endl;
		return cell;
	}
	
	mcell[x][y] = cell;
}

sheet &sheet::getCell(int x, int y) {
	sheet cell;
	if(!inRange(x, mw) || !inRange(y, mh)) {
		cout<<"parm error"<<endl;
		return cell;
	}

	return mcell[x][y];
}


boot sheet::inRange(int value, int upper) {
	if(value<0 || value > upper)
		return false;

	return true;
}


int main() {

	sheet md(3,4);
	md.setCell(2,2,6);
	cout<<md.getCell(2,2),getDoubleValue()<<endl;

  	return 0;
}



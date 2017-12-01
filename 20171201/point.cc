#include<iostream>
#include "point.h"

point::point() {}
point::point(int x, int y):mx(x),my(y) {}
point::point(const point &data) {
	mx = data.mx;
	my = data.my;
}

point &point::operator=(const point &data) {
	mx = data.mx;
	my = data.my;
}

const int point::x() const {
	return mx;
}

const int point::y() const {
	return my;
}

point &point::setx(int x) {
	mx = x;
}

point &point::sety(int y) {
	my = y;
}

point::~point() {}


#ifndef __POINT_H__
#define __POINT_H__
#include<iostream>

class point {
public:
	point();
	point(int x, int y);
	point(const point &data);
	point &operator=(const point &data);
	const int x() const;
	const int y() const;
	point &setx(int x);
	point &sety(int y);
	~point();
private:
	int mx,my;
};

#endif


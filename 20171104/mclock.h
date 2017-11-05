#ifndef __CLOCK_H__
#define __CLOCK_H__
using namespace std;

class mclock {
public:
	mclock();
	~mclock();

	mclock& seth(int h);
	mclock& setm(int m);

	int geth();
	int getm();

	void getA();
	void show();
private:
	int mh,mm;
	double diff;
};

#endif


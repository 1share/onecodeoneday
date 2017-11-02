#include<string>
using namespace std;

class cell {
public:
	cell() {};
	cell(string s);
	cell(double v);
	cell(const cell &data);
	~cell();

	cell &operator=(const cell &data);
	cell &operator+(const cell &data);

	void setDoubleValue(const double v);
	void setStringValue(const string s);

	double getDoubleValue();
	string &getStringValue();

protected:
	double mvalue;
	string ms;
	double string2double(const string s);
	string double2string(double value);
};


class sheet {
public:
  	static const int default_width = 100;
  	static const int default_high = 100;

	sheet(int w, int h) {};
	sheet(sheet &data) {};

	virtual ~sheet();

	sheet &operator=(sheet &data);
	
protected:
	int mw,mh;
};


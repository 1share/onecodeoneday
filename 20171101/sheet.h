#include<string>
using namespace std;

class cell {
public:
	cell();
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
	string mstr;
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
	void setCell(int x, int y, const cell &cell);
	cell getCell(int x, int y);
	
protected:
	bool inRange(int value, int upper);
	void copyFrom(const sheet &data);
	cell *mcell;
	int mw,mh;
};



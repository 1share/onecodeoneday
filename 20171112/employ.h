#include<iostream>
#include<string>

using namespace std;

class employ {
public:
	employ();
	virtual ~employ();

	employ &setFirstName(const string fname);
	employ &setSecondName(const string sname);
	employ &setNumber(const long number);
	virtual employ &setSalary(const long salary);

	const string &getFirstName() const;
	const string &getSecondName() const;
	const long &getNumber() const;
	virtual const long &getSalary() const;

	virtual void showEmployInfo() const;

private:
	employ(const employ &data);
	employ &operator=(const employ &data);
	
	string mfname;
	string msname;
	long mnumber;
	long msalary;
};

class manager : public employ {
public:
	manager() {};
	~manager() {};

	employ &setSalary(const long salary) {
		employ::setSalary(10 * salary);
		
		return *this;
	}

};

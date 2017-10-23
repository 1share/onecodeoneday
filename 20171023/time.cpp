#include<iostream>

using namespace std;

class Time {
public:
	Time(int hh, int mm, int ss) {
		h = hh;
		m = mm;
		s = ss;
	}
	Time(){
		h = 0;
		m = 0;
		s = 0;
	}
	~Time() {
		h = 0;
		m = 0;
		s = 0;
	}

	void SetTime_h(int hh) {
		h = hh;
	}
	void SetTime_m(int mm) {
		m = mm;
	}
	void SetTime_s(int ss) {
		s = ss;
	}
	int GetTime_h() {
		return h;
	}
	int GetTime_m() {
		return m;
	}
	int GetTime_s() {
		return s;
	}
	void Show() {
		cout<<h<<":"<<m<<":"<<s<<endl;
	}

private:
	int h,m,s;

};


void time_ops() {
	class Time t, t1(1,2,3), t2;
	int hh = 22, mm= 30, ss= 15;
	t.SetTime_h(hh);
	t.SetTime_m(mm);
	t.SetTime_s(ss);

	t.Show();
	t1.Show();
	t2.Show();

}



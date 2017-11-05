#include<iostream>
#include<iomanip>

using namespace std;

double getA(int h,int m)
{
        return ((h*30+m/60.0*30) - m*6);
}

int main() {
	double diff;
	int h,m;

	while(cin>>h>>m) {
		if(h < 0 || m < 0) {
			break;
		}
	
		h = h % 12;
		m = m % 60;		

		diff = getA(h,m);
		
		if(diff<0) diff = -diff;

		cout.fill('0');
		cout<<setw(2)<<h<<":";
		cout<<setw(2)<<m<<'|';
		cout<<diff<<endl;
	}
}



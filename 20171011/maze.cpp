#include <iostream>  
#include <utility> 
#include <stack> 
#include <map> 
using namespace std;

#define L	0
#define R	7
#define U	0
#define D	9


int run(int (*m)[R+1], int i, int j)
{
	stack< pair<int,int> > s;
	pair<int, int> pos;
	m[i][j] = 2;

	pos = make_pair(i,j);
	s.push(pos);

	int p,q;

	/*
		{0,0,1,0,0,0,1,0},
                {0,0,1,0,0,0,1,0},
                {0,0,0,0,1,1,0,1},
                {0,1,1,1,0,0,1,0},
                {0,0,0,1,0,0,0,0},
                {0,1,0,0,0,1,0,1},
                {0,1,1,1,1,0,0,1},
                {1,1,0,0,1,1,0,1},
                {1,1,0,0,1,1,0,0},
                {1,1,0,0,0,0,1,0}
	*/

	do{
		pos = s.top();
		p = pos.first;
		q = pos.second;

		if  ((q+1) <= R && m[p][q+1] == 0) {
			q++;
			pos = make_pair(p,q);
			s.push(pos);
			m[p][q]=2;
		} else if ((p+1) <=D && m[p+1][q] == 0) {
			p++;
			pos = make_pair(p,q);
                        s.push(pos);
                        m[p][q]=2;
		} else if ((p-1>=U) && m[p-1][q] == 0) {
                        p--;
                        pos = make_pair(p,q);
                        s.push(pos);
                        m[p][q]=2;
		} else if ((q-1>=L) && m[p][q-1] == 0) {
                        q--;
                        pos = make_pair(p,q);
                        s.push(pos);
                        m[p][q]=2;
		} else {
			s.pop();
		}

	} while(s.top().first != D || s.top().second != R);

	while(!s.empty()) {
		pos = s.top();
		cout<<"x:"<<pos.first<<" y:"<<pos.second<<endl;
		s.pop();
	}


}



int main(void)  
{  
	int i, j;  
	int m[D+1][R+1] = {  
		{0,0,1,0,0,0,1,0},  
		{0,0,1,0,0,0,1,0},  
		{0,0,0,0,1,1,0,1},  
		{0,1,1,1,0,0,1,0},  
		{0,0,0,1,0,0,0,0},  
		{0,1,0,0,0,1,0,1},  
		{0,1,1,1,1,0,0,1},  
		{1,1,0,0,1,1,0,1},
		{1,1,0,0,1,1,0,0},
		{1,1,0,0,0,0,1,0}
	};  


	run(m,0,0);
}  

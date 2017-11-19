#include<iostream>
#include "sheet.h"
#include "tmpl.h"

using namespace std;

template<typename T>
game<T>::game(int w, int h):mw(w),mh(h),mx(0),my(0) {
	mcell = new T*[mw];
	for(int i=0;i<mw;i++) {
		mcell[i]= new T[mh];
	}
}

template<typename T>
game<T>::~game() {
	for(int i=-0;i<mw;i++) {
		delete [] mcell[i];
	}

	delete [] mcell;

}
template<typename T>
void game<T>::CopyFrom(const game<T> &data) {
	mw = data.mw;
	mh = data.mh;

	mcell = new T*[mw];
	for(int i;i<mw;i++) {
		mcell[i]=new T[mh];
	}

	for(int i;i<mw;i++) {
		for(int j;j<mh;j++) {
			mcell[i][j] = data.mcell[i][j];
		}
	}

}

template<typename T>
game<T>::game(const game<T> &data) {
	CopyFrom(data);
}


template<typename T>
game<T> &game<T>::operator=(const game<T> &data) {
	if(this == &data) {
                return *this;
        }

        for(int i=0;i<mw;i++) {
                delete [] mcell[i];
        }
        delete mcell;

	CopyFrom(data);

	return *this;
}


template<typename T>
void game<T>::setCell(int x, int y, const T &cell) {
	mx = x;
	my = y;
	
	mcell[x][y] = cell;
}


template<typename T> 
T &game<T>::getCell(int x, int y){
	return mcell[x][y];
}


int main() {
	game<cell> mygame(10,10);
	mygame.setCell(5,3,10.1);
	cout<<mygame.getCell(5,3)<<endl;



}






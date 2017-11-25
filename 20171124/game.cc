#include<iostream>
#include "game.h"

using namespace std;
using namespace mycode;

gameboard::gameboard(int w, int h):mw(w),mh(h) {
	msheet = new sheet(mw,mh);
}

gameboard::~gameboard() {
	delete msheet;
}

void gameboard::setCell(int x, int y, const cell &data) {
	msheet->setCell(x, y, data);
}

cell &gameboard::getCell(int x, int y) const{
	return msheet->getCell(x,y);
}

#if 0
int main() {
	gameboard gb(10,10);
	gb.setCell(3,4,9);
	cout<<gb.getCell(3,4)<<endl;

	return 0;
}

#endif


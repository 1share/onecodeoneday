#ifndef __GAME__
#define __GAME__
#include<iostream>
#include "sheet.h"

using namespace std;

namespace mycode {
	class gameboard {
		public:
			gameboard(int w, int h);
			gameboard(const gameboard &gb);
			~gameboard();	
			void setCell(int x, int y, const cell &data);
			cell &getCell(int x, int y) const;
			int getH() const {return mh;};
			int getW() const {return mw;};

		private:
			int mw,mh;
			sheet *msheet;
	};
}

#endif

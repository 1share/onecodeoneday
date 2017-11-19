template<typename T>
class game {
	public:
		game(int w, int h);
		virtual ~game();
		game(const game<T> &data);
		game<T> &operator=(const game<T> &data);
		void setCell(int x, int y, const T &cell);
		T &getCell(int x, int y);
		int getX(const T &cell) {return mx;}
		int getY(const T &cell) {return my;}

		int getW() {return mw;}
		int getH() {return mh;};
	private:
		void CopyFrom(const game<T> &data);
		int mw,mh;
		int mx,my;
		T **mcell;
};

#ifndef __myutils_hpp__
#define __myutils_hpp__

/* arraylist */
class my_al {
public:
	static const int last_index;
	my_al(int initC = 2);
	~my_al();

	int getMaxCount() const;
	int getCount() const;
	int appendValue(void *value);
	const void *getValue(int index) const;
	void *takeValue(int index);


private:
	my_al(my_al &);
	my_al &operator=(my_al &);
	int mMC;
	int mC;
	void **mFirst;

};
#endif

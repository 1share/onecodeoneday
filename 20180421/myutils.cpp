#include<string.h>
#include<assert.h>

#include "myutils.hpp"

const int my_al::last_index = -1;

my_al::my_al(int initC) {
	mMC = initC <= 0 ? 2 : initC;
	mC = 0;
	mFirst = (void **)malloc(mMC * sizeof(void *));
}

my_al::~my_al() {
	free(mFirst);
	mFirst = NULL;
}

int my_al::getCount() {
	return mC;
}

int my_al::appendValue(const void *value) {
	if (NULL == value) {
		return -1;
	}

	if (mC <= mMC) {	
		mMC = (mMC * 3) / 2 + 1;
		mFirst = (void **)remalloc(mMC * sizeof(void *));
		assert(NULL != mFirst);
		memset(mFirst+mC, 0, (mMC - mC) * sizeof(void *)):
	}
		
	mFirst[mC] = value;

	return 0;
}

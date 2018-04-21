#include<stdlib.h>
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

int my_al::getMaxCount() const {
	return mMC;
}

int my_al::getCount() const {
	return mC;
}

int my_al::appendValue(void *value) {
	if (NULL == value) {
		return -1;
	}

	if (mC >= mMC) {	
		mMC = (mMC * 3) / 2 + 1;
		mFirst = (void **)realloc(mFirst, mMC * sizeof(void *));
		assert(NULL != mFirst);
		memset(mFirst+mC, 0, (mMC - mC) * sizeof(void *));
	}
		
	mFirst[mC++] = value;

	return 0;
}

const void *my_al::getValue(int index) const {
	const void *ret = NULL;

	if (last_index == index) {
		index = mC - 1;
	}

	if(index < 0 || index >= mC) {
		return ret;
	}
	
	ret = mFirst[index];

	return ret;
}

void *my_al::takeValue(int index) {
	void *ret = NULL;

	if (last_index == index) {
		index = mC - 1;
	}

	if(index < 0 || index >= mC) {
		return ret;
	}
	
	ret = mFirst[index];

	mC--;

	if (index >= (mMC - 1)) {
		mFirst[index] = NULL;
	} else {
		memmove(mFirst+index, mFirst+index+1, (mMC - index -1) * sizeof(void *));
	}

	return ret;
}













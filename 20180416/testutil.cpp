#include <stdio.h>

#include "util.hpp"

int main( int argc, char * argv[] )
{
	class SP_ArrayList al(10);

	printf("getCount:%d\n", al.getCount());
	void *p = reinterpret_cast<void *>(const_cast<char *>("abc"));
	al.append(p);
	p = reinterpret_cast<void *>(const_cast<char *>("123"));
	al.append(p);
	p = reinterpret_cast<void *>(const_cast<char *>("efg"));
	al.append(p);
	p = reinterpret_cast<void *>(const_cast<char *>("456"));
	al.append(p);
	p = reinterpret_cast<void *>(const_cast<char *>("xxx"));
	al.append(p);
	printf("getCount:%d\n", al.getCount());

	printf("---------------------\n");

	int i;
	const void *value = NULL;
	for(i=0;i<al.getCount();i++) {
		value = al.getItem(i);
		printf("getItem:%s\n",reinterpret_cast<const char *>(value));
	}

	return 0;
}


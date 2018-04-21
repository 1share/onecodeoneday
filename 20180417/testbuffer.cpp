#include <stdio.h>
#include <string.h>
#include "spbuffer.hpp"

int main( int argc, char * argv[] )
{
	class SP_Buffer buf;;
	const char *p = "abc123";
	int len = strlen(p);

	buf.append(p, len);

	printf("%s\n", buf.getBuffer());


	return 0;
}



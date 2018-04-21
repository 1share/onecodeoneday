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


	const char *p1 = "1abc1234\n";
	const char *p2 = "2abc1234\n";
	const char *p3 = "3abc1234\n";
	buf.append(p1);
	buf.append(p2);
	buf.append(p3);

	printf("----------\n");
	printf("%s",buf.getBuffer());
	printf("----------\n");
	printf("%s\n",buf.getLine());
	printf("%s\n",buf.getLine());
	printf("%s\n",buf.getLine());

	return 0;
}



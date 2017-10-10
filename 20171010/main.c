#include<stdio.h>

extern void change(const char *s, char *d);
extern void stack_t();

int main() {
	char d[1024] = {};

	const char *s = "abcd";
	change(s, d);

	printf("%s\n", d);
	
	stack_t();

}

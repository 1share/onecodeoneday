#include<stdio.h>

extern void change(const char *s, char *d);
extern void stack_t();
extern void stack_t2();
extern void map_t();

int main() {
	char d[1024] = {};

	const char *s = "abcd";
	change(s, d);

	printf("%s\n", d);
	
	stack_t();
	stack_t2();
	map_t();

}

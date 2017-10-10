#include<stdio.h>
#include<string.h>

/* "abcd" -> "dcba"  */
void change(const char *s, char *d) {
	int len = strlen(s);
	int i,j=0;
	for (i=len-1,j=0; i>=0; i--) {
		d[j++] = s[i];
	}
}


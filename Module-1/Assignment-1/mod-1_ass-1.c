#include<stdio.h>
int main() {
	char c,last='-';
	printf("enter a String\n");
	while((c = getchar()) != EOF) {
		if(c != ' ') {
			putchar(c);
		}
		else {
			if(last != ' ') {
				putchar(c);
			}
		}
		last = c;
	}
	return 0;
}
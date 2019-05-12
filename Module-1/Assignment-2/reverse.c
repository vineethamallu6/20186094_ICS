#include<stdio.h>
#include<string.h>
int main() {
	char str[50];
	char rev[50];
	int j=0,i=0;
	printf("enter a string\n");
	gets(str);
	printf("\nString = %s", str);
	for (i=strlen(str)-1; i>=0;i--) {
		rev[j++] = str[i];
	}
	printf("\nReverse String = %s",rev);
	return 0;
}
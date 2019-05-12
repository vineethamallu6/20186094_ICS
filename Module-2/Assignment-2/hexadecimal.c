#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	long decimal=0;
	int i,value,len;
	char hexa[20];
	printf("enter a hexadecimal number\n");
	gets(hexa);
	len = strlen(hexa);
	len--;
	for(i=0;hexa[i] != '\0';i++) {
		if(hexa[i] >='0' && hexa[i] <= '9') {
			value = hexa[i] - 48;
		}
		else if(hexa[i] >='a' && hexa[i] <= 'f') {
			value = hexa[i] - 97+10;
		}
		else if(hexa[i] >='A' && hexa[i] <= 'F') {
			value = hexa[i] - 65+10;
		}
		decimal = decimal + value * pow(16,len);
		len--;
	}
	printf("hexadecimal number = %s\n", hexa);
	printf("decimal number = %ld\n", decimal);
	return 0;
}
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main() {
	printf("the maximum value of float = %.10e\n", FLT_MAX);
	printf("the minimum value of float = %.10e\n", FLT_MIN);

	printf("the maximum value of INT = %d\n", INT_MAX);
	printf("the minimum value of INT = %d\n", INT_MIN);

	printf("the maximum value of CHAR = %d\n", CHAR_MAX);
	printf("the minimum value of CHAR = %d\n", CHAR_MIN);

	printf("the maximum value of long = %ld\n", LONG_MAX);
	printf("the minimum value of long = %.ld\n", LONG_MIN);

	printf("the maximum value of double = %g\n", DBL_MAX);
	printf("the minimum value of double = %g\n", DBL_MIN);

}
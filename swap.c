#include<stdio.h>
int main() {
	int a=31,b=17;
	printf("Before swapping a=%d b=%d",a,b);
	a=a+b;   //a=15
	b=a-b;   //b=5
	a=a-b;   //a=10
	printf("\nAfter swapping a=%d b=%d",a,b);
	return 0;
}

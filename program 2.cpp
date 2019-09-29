#include<stdio.h>
int main() {
	int a,b;
	printf("enter the values:");
	scanf("%x\n%x",&a,&b);
	printf("\n%x",a & b);
	printf("\n%x",a | b);
	printf("\n%x",a ^ b);
	printf("\n%x",a >> b);
	printf("\n%x",a << b);
}

#include<stdio.h>
int main() {
	int n,i = 0,b;
	printf("enter the value:");
    scanf("%d",&n);
    if (n % 2 == 0) {
    	printf("even");
	}
	else {
		printf("odd");
	}
	b = n << 1;
	if ( n & b == 1) {
		printf("\neven");
	}
	else {
		printf("\nodd");
	}
	
}

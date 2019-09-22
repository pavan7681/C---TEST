#include<stdio.h>
int main() {
   char ch;
   int n,i = 0,a[100],count = 0,s = 1,rem,d = 0;
   scanf("%c",&ch);
   n = ch;	
   while (n != 0) {
		  a[i] = n % 2;
		  printf("%d",a[i]);
		  i ++;
		  n /= 2;
	}
	printf("\n");
	a[i- 6] = 1;
	while (i > 0) {
	   	d = d + a[i - 1] * s;
		 s = s * 2;
		 i--;
		 
	}
	printf("%d",d);
}


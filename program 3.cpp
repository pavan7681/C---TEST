/*3)Read two integers from the user. Perform all possible logical 
   operations on these two integers. Print the results of all these 
   logical  operations. Following are the possible logical operators:

   AND(&&)   OR(||)    NOT(!) */

#include<stdio.h>
int main() {
	int a,b,c;
	printf("enter a and b values :");
	scanf("%d\n%d",&a,&b);
    printf("%d",a && b);
    printf("\n%d",a || b);
    printf("\n%d",!a);
	printf("\n%d",!b);	
	c = a && b || a;
	printf("\n%d",c);
	c = a || b && c;
	printf("\n%d",c);
	}


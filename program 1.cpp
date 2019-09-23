/*1)Read two integers from the user (that is first define two integer variables
   and then read). Perform all possible conditional operations on these
   two integers. Print the results of all these conditional operations.
   Following are the possible conditinal operators:

   Equal to(==)    Less than(<)    Greater than(>)   
   Less than or Equal to (<=)  Greater than or equal to(>=)
   Not equal to(!=) */

#include<stdio.h>
int main() {
	int a,b;
	printf("enter a and b values :");
	scanf("%d %d",&a,&b);
	if (a > b) {
		printf("\na is greater than b");
	}
	else {
		printf("\nb is greater than a");
	}
	if (a != b) {
		printf("\na is not equal to b");
	}
        if( a == b ) {
                printf("\na and b are equal");
	}
	//relational operators in nested if.
	if (a >= 5) {
		if (a != 2) {
			a == 0;
		}
	}
	printf("\n%d",a);
}

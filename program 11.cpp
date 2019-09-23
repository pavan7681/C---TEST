/*11) Define an array of 5 int variables. Ask user to enter 5 numbers.
   Read five numbers into this array of five. Finally print these 5 numbers. */

#include<stdio.h>
int main() {
	int i,a[5];
	printf("enter the values :");
	for (i = 0;i < 5;i++) {
		scanf("\n%d",&a[i]);
	}
	printf("\n");
	for (i = 0;i < 5;i++) {
		printf("%d ",a[i]);
    }
	
}

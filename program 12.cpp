/*12)Read five numbers from the user into an array of 5. Calculate the smallest
   number, largest number, total and average. Finally print these calculated
   values. *>
   
#include<stdio.h>
int main() {
	int i,a[5],large,small,sum;
	printf("enter the values :");
	for (i = 0;i < 5;i++) {
		scanf("\n%d",&a[i]);
	}
	small = large = sum = a[0];
	for (i = 0;i < 4;i++) {
		if (a[i + 1] < small) {
			small = a[i + 1];
		}
		else {
			large = a[i + 1];
		}
		sum = sum + a[i + 1];
	}
	printf(" smallest number : %d\n largest number : %d\n average of numbers : %.1f",small,large,(float)sum / 5);
}

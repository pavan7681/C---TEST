#include<stdio.h>
int main() {
	char ch;
	int i;
	printf("enter the character:");
	scanf("%c",&ch);
	i = ch;
	if (i >= 65 && i < 92) {
	   printf("\ncapital letter");
    }
    else if (i >= 97 && i <= 122) {
       printf("\nsmall letter");
   }
    else if (i >= 49 && i<= 57) {
       printf("\nnumeric digit");
   }
    else {
       printf("\nother");
   }
}

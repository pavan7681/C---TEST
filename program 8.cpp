#include <stdio.h>
int main() {
	char ch;
	int i;
	printf("enter the character:");
	scanf("%c",&ch);
	
	i = ch;
	printf("%d",i);
	if (i >= 65 && i < 92) {
		i = i + 32;
	   printf("\n%c",i);
    }
    else if (i >= 97 && i <= 122) {
    	i = i - 32;
	   printf("\n%c",i);
   }
    else {
       printf("\%c",i);
   }
} 

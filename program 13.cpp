/*13)Read a line from the user and print the number of capital letters present
   in the string. *>
   
#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	int count = 0,i;
	gets(s);
	for (i = 0;i < strlen(s);i++) {
		 if (s[i] >= 65 && s[i] < 92 ) {
		 	    count++;
		 }
		 
	}
	printf("total capital letters : %d\n",count);
}

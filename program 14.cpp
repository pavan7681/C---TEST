/*14)Read a line and print the number of words present in the line string.
   Note that one or more spaces could be present between the wokds */

#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	int count = 0,i;
	gets(s);
	for (i = 0;i < strlen(s);i++) {
		 if (s[i] == ' ' && s[i - 1] != ' ' ||  i == strlen(s) - 1)
		  {
		 	    count++;
		 	    printf("%c ",s[i-1]);
		 }
		 
	}
	printf("NO OF WORDS :%d",count);
}


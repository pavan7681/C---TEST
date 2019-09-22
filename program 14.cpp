#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	int count = 0,i;
	gets(s);
	for (i = 0;i < strlen(s);i++) {
		 if (s[i] == "\0" ) {
		 	    count++;
		 }
		 
	}
	printf("NO OF WORDS :%d",count);
}

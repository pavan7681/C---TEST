/*15)Define a string of size 80 chars. Also define 5 strings of size 20 chars
    each. Ask the user to enter a line containg 5 words. Copy each word
    into individual strings. Finally print all the inidividual string. */

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int i,n = 1;
	char s[80],a[20],b[20],c[20],d[20],e[20];
	gets(s);
	    for (i = 0;i < strlen(s);i++) {
	    	
	    	if (s[i] == ' ')
	    	{
	             n++;
	             printf("\n");
			}
			switch (n) {
			    case 1 : a[i] = s[i];
			             printf("%c",a[i]);
			             break;
			    case 2 : b[i] = s[i];
			             printf("%c",b[i]);
			             break;
			    case 3 : c[i] = s[i];
			             printf("%c",c[i]);
			             break;
			    case 4 : d[i] = s[i];
			             printf("%c",d[i]);
			             break;
			    case 5 : e[i] = s[i];
			             printf("%c",e[i]);
			             break;
			    default : break;
			 
			}
			
		}
		
	
}

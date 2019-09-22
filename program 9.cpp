#include<stdio.h>
int main() {
	int a,b;
	printf("enter a and b values :");
	scanf("%d %d",&a,&b);
	char ch;
	printf("enter the operator:");
	scanf("\n%c",&ch);
	switch (ch) {
		case '+' : printf ("%d",a + b);
		          break;
		          
		case '-' : printf ("%d",a - b);
		          break;
		          
		case '*' : printf ("%d",a * b);
		          break;
		          
		case '%' : printf ("%d",a % b);
		          break;
		          
		case '/' : printf ("%d",a / b);
		          break;
		          
	    default : printf("not a defined operator");
	              break;
	}
}

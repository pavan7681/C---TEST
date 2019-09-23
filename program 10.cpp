/*10) Read month from the user as integer. User should enter 1 for the month
    January, 2 for February and so on. The program should print the number
    days in the given month. Use switch() statement. Assume that year is
    not a leaf year. */

#include<stdio.h>
int main() {
	int a;
	printf("enter value :");
	scanf("%d",&a);
	switch (a) {
		case 1 : printf ("january : 31 days");
		          break;
		          
		case 2 : printf ("february : 28 days");
		          break;
		          
		case 3 : printf ("march : 31 days");
		          break;
		          
		case 4 : printf ("april : 30 days");
		          break;
		          
		case 5 : printf ("may : 31 days");
		          break;
		
		case 6 : printf ("june : 31 days");
		          break;
		
		case 7 : printf ("july: 31 days");
		          break;
		
		case 8 : printf ("august: 31 days");
		          break;
	    
		case 9 : printf ("september : 31 days");
		          break;
	    
		case 10 : printf ("october: 31 days");
		          break;
		
		case 11 : printf ("november : 31 days");
		          break;
		
		case 12 : printf ("december : 31 days");
		          break;
				            
		          
	    default : printf("not defined month");
	              break;
	}
}

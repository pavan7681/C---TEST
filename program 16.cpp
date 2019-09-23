/*16)Define a structure variable of type 'struct Time' as given below:
   struct Time
   {
     int hour;
     int min;
     int sec;
   }; 

   Note that the structure fields hour, min and sec are integers.
   Small integers are sufficient to store the time values.
   Ask the user to enter hours, minutes and seconds. Read those values into
   the structure. Finally print the time structure with the format 'HH:MM:SS'.*/

#include<stdio.h>
struct Time
   {
     int hour;
     int min;
     int sec;
   }i; 
   int main() {
   	int h,m,c;
   	printf("enter the hours minutes and seconds :");
   	scanf("%d\n%d\n%d",&h,&m,&c);
   	i.hour = h;
   	i.min = m;
   	i.sec = c;
   	printf("\n %d:%d:%d",i.hour,i.min,i.sec);
   }

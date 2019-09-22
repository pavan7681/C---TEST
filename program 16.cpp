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

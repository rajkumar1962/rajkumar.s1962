#include<stdio.h>
int main()
{
int min,hr;
printf("enter the minute");
scanf("%d",&min);
hr=min/60;
min=min%60;
printf("%d\t%d",hr,min);
return 0;
}


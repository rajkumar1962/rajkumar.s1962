#include<stdio.h>
int main()
{
int n,a=0,rem;
printf("enter the integer");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
a=a*10+rem;
n=n/10;
}
if(n==a)
printf("number is palindrome");
else
printf("number is not palindrome");

return (0);
}

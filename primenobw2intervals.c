#include<stdio.h>
int main()
{
int num, m, n, d;
scanf("%d%d",&m,&n);
for(num=n;num<=n;num++)
{
for(d=2;d<num;d++)
{
if(num%d==0)
break;
}
if(d==num)
printf("%d",num);
} 
return 0;
}

#include<stdio.h>
int main()
 
{
 
  int m1, m2, i, temp, num, rem;
 
  printf("Enter two numbers(intervals): ");
 
  scanf("%d %d", &m1, &m2);
 
  printf("Armstrong numbers between %d an %d are: ", m1, m2);
 
  for(i=m1+1; i<m2; ++i)
 
  {
 
      temp=i;
 
      num=0;
 
      while(temp!=0)
 
      {
 
          rem=(temp%10);
 
          num+=rem*rem*rem;
 
          temp/=10;
 
      }
 
      if(i==num)
 
      {
 
          printf("%d ",i);
 
      }}
      return 0;
  }
 
  
 

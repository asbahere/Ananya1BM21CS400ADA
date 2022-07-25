#include<stdio.h>
void main()
{
  int m,n;
  printf("Enter two positive  both non-negative integers\n");
  scanf("%d %d",&m,&n);
  printf("The GCD of %d and %d is %d",m,n,gcd(m,n));
}

int gcd(int m,int n)
{
  if(n==0)
    return m;
  else
    return gcd(n,m%n);
 }

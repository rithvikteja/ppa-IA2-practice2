#include<stdio.h>
int input()
{
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  return num;
}
int gcd(int a,int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
void output(int a,int b,int gcd)
{
  printf("the gcd of %d & %d=%d\n",a,b,gcd);
}
int main()
{
  int num1=input();
  int num2=input();
  int res=gcd(num1,num2);
  output(num1,num2,res);
  return 0;
  }
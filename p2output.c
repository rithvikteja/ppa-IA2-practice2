#include<stdio.h>
int input_side()
{
  int side;
  printf("enter the side of triangle\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && c!=a)
  {
    return 1;
  }
  return 0;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene)
  {
    printf("the triangle with sides %d,%d & %d is scalene\n",a,b,c);
    }
  else
  {
    printf("th triangle with sides %d,%d & %d is not scalene\n",a,b,c);
  }
  }
int main()
{
  int ab=input_side();
  int bc=input_side();
  int ca=input_side();
  int res=check_scalene(ab,bc,ca);
  output(ab,bc,ca,res);
  return 0;
  }
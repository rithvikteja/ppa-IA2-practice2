#include<stdio.h>
int input_side()
{
  int x;
  printf("enter three sides of triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a==b&&b==c)
  {
    printf("all sides are equal\n");
  }
  else if(a==b||a==c||b==c)
  {
    printf("two sides are equal\n");
  }
  else
  {
    printf("it's a Scalene triangle\n");
  }
  return 0;
}
void output(int a,int b,int c,int isscalene)
{
  printf("%d \n",isscalene);
}
  int main()
{
   int a,b,c,isscalene;
   a=input_side();
   b=input_side();
   c=input_side();
   isscalene=check_scalene(a,b,c);
   output(a,b,c,isscalene);
   return 0;
}
   
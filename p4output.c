#include<stdio.h>

int input_array_size()
{
  int length;
  printf("enter length of array\n");
  scanf("%d",&length);
  return length;
}
void input_array(int n,int a[n])
{
  printf("enter all the values of array\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  }

int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
    {
      if(n%i==0)
        return 1;
    }
  return 0;
}

int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      if(is_composite (a[i]))
      {
        sum+=a[i];
      }
      }
      return sum;
      }
void output(int sum)
{
  printf("sum is %d\n",sum);
}
int main()
{
  int length=input_array_size();
  int data[length];
  input_array(length,data);
  int result=sum_composite_numbers(length,data);
  output(result);
  return 0;
}
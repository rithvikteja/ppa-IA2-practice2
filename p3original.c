#include <stdio.h>
int input_number()
{
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  for (int i=2;i<=n/2;i++)
  {
    if (n%i==0)
    return 1;
  }
  return 0;
}
void output(int n, int iscomposite)
{
  if (iscomposite)
    printf("%d is a composite number\n",n);
  else 
    printf("%d is not a composite number\n",n);
}
int main()
{
  int n,iscomposite;
  n=input_number();
  iscomposite=is_composite(n);
  output(n,iscomposite);
}
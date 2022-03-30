#include<stdio.h>
#include<string.h>
 void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s",a);
}
char str_reverse(char *a)
{
  char temp;
  int i=0,j=0;
  j=strlen(a)-1;
  while(i<j)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
    }
}
void output(char *a)
{
  printf("the reverse string=%s\n",a);
}
int main()
{
  char a[20];
  input_string(a);
  str_reverse(a);
  output(a);
  return 0;
}
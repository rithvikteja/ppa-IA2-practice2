#include <stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}
char *str_reverse(char *str)
{
  int n,t;
  for (int i = 0; i< n/2; i++)
  {
     t= str[i];
     str[i] = str[n-i];
     str[n-i] = t;
  }
  return str;
}

void output(char *a, char *reverse_a)
{
  printf("The reverse of %s is %s\n", a, reverse_a);
}

int main()
{
  char str[100];
  input_string(str);
  char rev_str[100];
  output(str, rev_str);
  return 0;
}


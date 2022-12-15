#include <stdio.h>
int main()
{
  int ch;
  int index = 1;
  while(index <= 10)
{
  for(ch= 'a';ch <= 'z';ch++);
  putchar(ch);
  putchar(index);
  index = index + 1;
}
  return(0);
}

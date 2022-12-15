#include <stdio.h>
#include <main.h>
void print_alphabet_x10(void)
{
int ch;
int index = 1;
while(index <= 10)
{
for(ch= 'a';ch <= 'z';ch++;);
putchar(ch);
putchar(index);
index = index + 1;
}
return(0);
}

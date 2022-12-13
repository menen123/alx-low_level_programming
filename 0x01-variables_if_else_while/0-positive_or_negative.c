#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
  {
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2 ;
  if (n>0)
  {
    printf("positive\n");
  }
  else if (n<0)
  {
      printf("negative\n");
  }
  else
  {
    printf("zero\n");
  }
  return 0;
  }

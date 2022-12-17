#include <studio.h>
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
	  putchar(i);/**here the output is infinitely zero because it says here for i is less than zero print 0 as an out put and since this is always true and never false  the loop will be created.but if we set up a condition where this argument could be false like by adding i++ for examle we will be able to avoid the endless loop*/ 
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

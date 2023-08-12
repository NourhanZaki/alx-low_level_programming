#include <stdio.h>

/* more headers goes there */

/* check the last digit */
int main(void)
{
    	char abc[] = "abcdefghijklmnopqrstuvwxyz";
    	int i;
    	for(i = 25; i>=0; i--)
    	{
        	putchar(abc[i]);
 	}
    
        putchar('\n');
	return (0);
}

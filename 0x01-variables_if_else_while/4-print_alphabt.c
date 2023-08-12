#include <stdio.h>

/* more headers goes there */

/* check the last digit */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
    	int i = 0;
    	for(i = 0; i<26; i++)
    	{
        	if(abc[i] == 'e' || abc[i] == 'q')
		{
            		i++;
        	}
        	putchar(abc[i]);
    	} 
        putchar('\n');
	return (0);
}

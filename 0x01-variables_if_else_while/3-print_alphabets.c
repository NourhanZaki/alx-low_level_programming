#include <stdio.h>

/* more headers goes there */

/* check the last digit */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;
    int b = 0;
    for(i = 0; i<26; i++)
    {
        putchar(abc[i]);
    }
    for(b = 0; b<26; b++)
    {
        putchar(A[b]);
    } 
         putchar('\n');
	return (0);
}

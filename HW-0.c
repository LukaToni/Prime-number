#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, c, n=0;
	//insert number
	do
	{
		c=getchar();
		if(('0' <= c) && (c <= '9'))
			n = 10 * n + (c - ('0'));
		else
			if(c != '\n')
				exit(1);
	}while (c != '\n');

	//number we write inASCII code)
	//check if is prime number

	for ( i = 2 ; i < n  ; i++ )
	{
		if ( n % i == 0 )
		{
			printf("N");
			break;
		}
	}

	if ( i == n )
		printf("Y");

	//number 1 is not a prime number

	if (n == 1)
		printf("N");
		
		return 0;
}

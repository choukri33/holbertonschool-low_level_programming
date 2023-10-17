#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{

	int n, last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10 ;

	if (last_digit > 5)
	{	
	printf(" the last digit of %d is %d greater than 5\n",n, last_digit);

	}
	else if (last_digit == 0)
	{
	printf(" the last digit of %d is %d and is 0\n",n, last_digit);
	}
	else 
	{
	printf(" the last digit of %d is %d ans is less than 6 and not 0\n",n, last_digit);
	}

	return (0);
}

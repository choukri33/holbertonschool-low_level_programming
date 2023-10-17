#include <stdio.h>
#include <time.h>
/**
 *main - prints the alphabet except q and e
 *Return: 0
 */
int main(void)
{
char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
	if (alphabt != 'q' && alphabt != 'e')
	putchar(alphabt);
	}
	putchar('\n');
	return (0);
}

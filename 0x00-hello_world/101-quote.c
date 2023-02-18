#include <stdio.h>
#include <unistd.h>

/**
* main - Main Function
* Return: Return 0 if successful
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, q, 59);

	return (1);
}

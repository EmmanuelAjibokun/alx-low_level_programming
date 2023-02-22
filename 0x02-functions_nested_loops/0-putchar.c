#include <main.h>

/* more headers goes there */

/**
 * main - Main Function
 * Return: Return 0 if successful
 */
/* betty style doc for function main goes there */

int main(void)
{
	char a[] = "_putchar";
	int a_size = sizeof(a) / sizeof(a[0]);
	int i;

	for (i = 0; i < a_size; i++)
	{
		putchar(a[i]);
	}

	putchar('\n');
	return (0);
}

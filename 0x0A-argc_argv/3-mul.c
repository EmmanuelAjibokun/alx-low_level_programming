/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	result = argv[argc - 2] * argv[argc - 1];
	return (result);
}

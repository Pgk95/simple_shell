#include <stdio.h>
#include <stdlib.h>
/**
 * main - stores arguments.
 * Return: Always (0).
 */
{
	char *command = NULL;
	size_t len = 0;

	while (1)
	{
		printf("$ ");
		getline(&command, &len, stdin);
		printf("%s", command);
	}
	free(command);
	return(0);
}

#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - entry point
* Return: Always 0
*/
int main(void)
{
	int i = 0;
	extern char **environ; /* Declare the environ variable */

	char *env_var = "shell";
	printf("%s", env_var);

	/*Iterate through the environment variables and print them */
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
return (0);
}

#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * exit_shell - Function used to exit a shell program
 * Return: void
 */

void exit_shell(void)
{
	printf("Exiting the shell\n");
	exit(0);
}

/**
  * main - entry point
  * Return: Always 0
*/

int main(void)
{
	char input[100];

	printf("Hello, Shell!\n");

	while (01)
	{
		printf("$ ");
		fgets(input, 100, stdin);
		/* Check if the input is "exit"*/
		if (strcmp(input, "exit\n") == 0)
		{
			exit_shell();
		}
		/* Add code to handle other commands here*/
	}
return (0);
}

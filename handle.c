#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - entry point
  * Return: Always 0
*/

int main(void)
{
	char input[100];
	char *command;
	char *argument;

	printf("Hello, Shell\n");

	while (1)
	{
		printf("$ ");
		fgets(input, 100, stdin);

		/* Parse the input to separate the command and its arguments */
		command = strtok(input, " \n");
		argument = strtok(NULL, " \n");

		/* Check if the input is "exit" */
		if (strcmp(command, "exit") == 0)
		{
			void exit_shell(void);
		}
		else
		{
			/* Handle other commands here */
			printf("Command: %s\n", argument);
		}
	}
return (0);
}

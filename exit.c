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
 * char input[100];
 *
 * printf("Hello, Shell!\n");
 * while (1)
 * {
 * printf("$ ");
 * fgets(input, 100, stdin);
 * Check if the input is "exit"
 * if (strcmp(input, "exit\n") == 0)
 *	{
 *		exit_shell();
 *	}
 *	Add code to handle other commands here
 * }
 * return (0);
 */

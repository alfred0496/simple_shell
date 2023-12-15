#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void exit_shell(void)
{
	printf("Exiting the shell");
	exit(0);

/**
 * char input[100];
 * char *directory;
 * printf("Hello, Shell!");
 * while (1)
 *	{
 *	printf("");
 *	fgets(input, 100, stdin);
 *
 *	Check if the input is "exit"
 *	if (strcmp(input, "exit") == 0)
 *		{
 *			exit_shell()
 *		}
 *		else if (strncmp(input, "cd ", 3) == 0)
 *		{
 *			Get the directory from the input
 *			directory = input + 3;
 *			directory[strcspn(directory, "")] = 0; // Remove newline character
 *
 *			Hand4e cd command
 *			if (strcmp(directory, "-") == 0)
 *			{
 *				chdir(getenv("OLDPWD"));
 *			}
 *			else if (strlen(directory) == 0)
 *			{
 *				chdir(getenv("HOME"));
 *			}
 *			else
 *			{
 *				if (chdir(directory) != 0)
 *				{
 *					perror("cd");
 *				}
 *			}
 *
 *			Update the PWD environment variable
 *			char cwd[1024];
 *			if (getcwd(cwd, sizeof(cwd)) != NULL)
 *			{
 *				setenv("PWD", cwd, 1);
 *			}
 *			else
 *			{
 *				perror("getcwd");
 *			}
 *		}
 *		else
 *		{
 *			Add code to handle other commands here
 *		}
 *	}
 *}
 return 0);
 /

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
	char *input;
	size_t bufsize = 32;
	input = (char *)malloc(bufsize * sizeof(char));

	if (input == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	while (1)
	{
		printf("");
		getline(&input, &bufsize, stdin);
		input[strcspn(input, "")] = 0; // Remove newline character
	
		if (strcmp(input, "exit") == 0)
		{
			break;
		}

		pid_t pid = fork();

		if (pid < 0)
		{
			perror("Fork failed");
			exit(1);
		}
		else if (pid == 0)
		{
			char *args[] = input, NULL;
			execve(args[0], args, NULL);
			perror("Execve failed");
			exit(1);
		}
		else

		wait(NULL);
	}
}
free(input);
return (0);
}

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
	char *args[] = {"/bin/echo", "Hello, Shell!"};

	execve(args[0], args, NULL);

return (0);
}

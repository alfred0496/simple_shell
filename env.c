#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ; /* Declare the environ variable */

/**
* main - entry point
* Return: Always 0
*/
int main(void)
{
  char *env_var;
  int i = 0;

  /*Iterate through the environment variables and print them */
  while (environ[i] != NULL)
  {
    printf("%s\n", environ[i]);
    i++;
  }
  return (0);
}

#include "main_shell.h"
/**
* invoke_command - execute
* @command: prompt and show output
*
* Return: Nothing
*/
void invoke_command(const char *command)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		get_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *args[128];
		int arg_count = 0;
		char *token = strtok((char *)command, " ");

		while (token != NULL)
	{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
	}
		args[arg_count] = NULL;
		execvp(args[0], args);
		get_print("No such file or directory.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

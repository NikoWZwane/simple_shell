#include "main_shell.h"
/**
* retrieve_command  - The shell waits for the user to input a command
* @command: pointer to command and show prompt
*
* Return: Nothing
*/

void retrieve_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			get_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			get_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

#include "main_shell.h"
/**
* main - function that loops
*
* Return: 0
*/

int main(void)
{
	char command[125];

	while (true)
	{
		show_prompt();
		retrieve_command(command, sizeof(command));
		invoke_command(command);
	}
	return (0);
}

#include "main_shell.h"
/**
* get_print - print string
* @memo: pointer to messege string
*
* Return: Nothing
*/
void get_print(const char *memo)
{
	write(STDOUT_FILENO, memo, strlen(memo));
}

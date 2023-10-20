#ifndef MAIN_SHELL_H
#define MAIN_SHELL_H

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <stdbool.h>

void show_prompt(void);
void get_print(const char *memo);
void retrieve_command(char *command, size_t size);
void invoke_command(const char *command);

#endif

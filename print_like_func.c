#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Prints the passed string
 * @str: String to be be printed
 *
 * Return: Characters printed
 */
int print_string(char *str)
{
       int length;

       length = str_len(str);
       write(STDOUT_FILENO, str, length);
       return (length);
}

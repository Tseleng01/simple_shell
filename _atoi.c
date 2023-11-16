#include "shell.h"
<<<<<<< HEAD

=======
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
<<<<<<< HEAD

=======
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
<<<<<<< HEAD

/**
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

=======
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
<<<<<<< HEAD

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

=======
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

<<<<<<< HEAD
	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

=======
	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
<<<<<<< HEAD

=======
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
	if (sign == -1)
		output = -result;
	else
		output = result;
<<<<<<< HEAD

=======
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
	return (output);
}

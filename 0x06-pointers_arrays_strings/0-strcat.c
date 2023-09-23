#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenation two strings
 * @dest:the destination string
 * @src: the source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char s1[98] = "welcome  ";
	char s2[] = "kenya!\n";
	char *ptr;
	
	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}

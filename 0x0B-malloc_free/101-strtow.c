#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_word_count - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
static int get_word_count(char *str)
{
	int count = 0;
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	{
	count++;
	}
	}
	return (count);
}
/**
 * allocate_and_copy - Allocate memory for a word and copy it.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 * @str: The input string.
 *
 * Return: A pointer to the allocated memory.
 */
static char *allocate_and_copy(int start, int end, char *str)
{
	int word_len = end - start + 1;
	char *word = malloc((word_len + 1) * sizeof(char));

	if (word == NULL)
	{
	return (NULL);
	}
	strncpy(word, &str[start], word_len);
	word[word_len] = '\0';
	return (word);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	int len = strlen(str);
	int word_count = get_word_count(str);
	char **words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
	{
	return (NULL);
	}
	words[word_count] = NULL;
	if (word_count == 0)
	{
	return (words);
	}
	int count = 0, start = 0, end = 0;
	int i;

	for (i = 0; i < len; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	{
	start = i;
	}
	if (str[i] != ' ' && (i == len - 1 || str[i + 1] == ' '))
	{
	end = i;
	words[count] = allocate_and_copy(start, end, str);
	if (words[count] == NULL)
	{
	while (--count >= 0)
	{
	free(words[count]);
	}
	free(words);
	return (NULL);
	}
	count++;
	}
	}
	return (words);
}

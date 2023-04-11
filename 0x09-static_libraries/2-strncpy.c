#include "main.h"
/**
<<<<<<< HEAD
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
=======
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ;  i < n ; i++)
		dest[i] = src[i];
	return (dest);
}



>>>>>>> origin

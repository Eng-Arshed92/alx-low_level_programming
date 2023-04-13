#include "main.h"
<<<<<<< HEAD

/**
 * char *_strcpy - a function that copies the string pointed to by src
=======
/**
 * char* _strcpy - a function that copies the string pointed to by src
>>>>>>> origin
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD
	int l = 0;
	int x = 0;


	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
=======
	int I = 0;
	int x = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for ( ; x < I; x++)
	{
		dest[x] = src[x];
	}
	dest[I] = '\0';
>>>>>>> origin
	return (dest);
}

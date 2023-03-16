#include <stdio.h>

/**
 * main - Entry pointn
 *
 * Return: 0 if the (success)
 */

int main(void)
{
	printf("Size of a char: %d byts(s)\n", sizeof(char));
	printf("Size of an int: %d byts(s)\n", sizeof(int));
	printf("Size of a long int: %d byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byts(s)\n", sizeof(long long int));
	printf("Size of a long float: %d byts(s)\n", sizeof(float));
	return (0);
}

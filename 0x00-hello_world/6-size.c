#include <stdio.h>

/**
 * main -main function
 *
 * Return: 0 if the success
 */

int main(void)
{
	printf("Size of a char: %lu byts(s)", sizeof(char));
	printf("Size of int: %lu byts(s)", sizeof(int));
	printf("Size of a long int: %lu byts(s)", sizeof(long int));
	printf("Size of a long long int: %lu byts(s)", sizeof(long long int));
	printf("Size of a long float: %lu byts(s)", sizeof(float));
	return (0);
}

#include <stdio.h>

/**
 *  main - Prints the size of various types based on the 
 *  the computer it is compiled or run on..
 *
 *  return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n"
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float))

	return (0);

}

#include<stdio.h>
/**
 * main - Entry Point
 *
 * This program prints the size of various types of the computer
 *
 * It also compiles and run on it
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));							printf("Size of an int: %ld byte(s)\n", sizeof(int));							printf("Size of a long int: %ld byte(s)\n", sizeof(long int));						printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));				printf ("Size of a float: %ld byte(s)\n", sizeof(float));						return (0);
}


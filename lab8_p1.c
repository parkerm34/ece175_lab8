/*	Author: Parker Mathewson
 *	Date: 3/28/12
 *	Comment: This is a program to express that we know how to use fgets and sscanf
 *			and know how to manipulate the print statements of strings
 *			that we have input in the keyboard.
 */

#include <stdio.h>
#define MAX_LENGTH 50


int main(void)
{
	char input_string[MAX_LENGTH];
	char first_word[MAX_LENGTH];
	float first_dec=0, second_dec=0;

	printf("Type in a sentence: ");
	fgets(input_string, MAX_LENGTH, stdin);
	sscanf(input_string, "%s", &first_word);

	printf("The string entered is: %s", input_string);
	printf("the first entered word is: %s\n", first_word);

	printf("Please type in two floats: ");
	fgets(input_string, MAX_LENGTH, stdin);
	sscanf(input_string, "%f %f", &first_dec, &second_dec);

	printf("The sum of %.2f and %.2f is %.2f\n", first_dec, second_dec, (first_dec + second_dec));
	return(0);
}

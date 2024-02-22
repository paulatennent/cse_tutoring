// part1_variables
//
// This program was written by Sofia De Bellis (z5418801),
// on January 2024
//
// This program shows how to declare and initalise variables.

#include <stdio.h>

int main(void) {
	// 1. Declare the variable 
    int variable_1;
	char variable_2;

	// 2. Initalise the variable
	variable_1 = 42;
	variable_2 = 'a';
	
	// declaring and initalising in the same line
	double variable_3 = 30.15;

	// 3. Print the variable
	printf("%d\n", variable_1);
	printf("%c\n", variable_2);
	printf("%lf\n", variable_3);

	// 4. Reassign the value of a variable
	variable_1 = -10;

	// 5. Print the variable
	printf("%d\n", variable_1);

	return 0;
}

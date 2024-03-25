#include <stdio.h>


/* 1. Create a function that takes in an array and prints it out nicely! */

void print_array(int array[MAX], int size) {
	int i = 0;
	printf("[");
	while (i < size) {
		printf("%d, ", array[i]);
		i++;
	}
	printf("]\n");
}

/* 2. Create a function that takes in an int array and adds 1 to each element! */

/* 3. Create a function that takes in an int array and turns any negative numbers to 0. */

/* 4. Create a function that takes in an array and finds the largest element in it */

/* 5. Create a function that takes in an array and tells us if there exists any negative numbers in it */

int main(void) {

	int numbers[5] = {1, 2, 3, 4, 5};

	print_array(numbers, 5);

  return 0;
}

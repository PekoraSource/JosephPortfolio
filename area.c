#include <stdio.h>

// Write a program to add 3 numbers
// Ask user for 3 different numbers using scanf
// scanf("%i", ...);
// Then printf the sum of the three numbers

int main() {
	int Length, Width, Area;
	printf("Enter Length: ");
	scanf("%i", &Length);
	printf("Enter Width: ");
	scanf("%i", &Width);
	printf("The area is  %i\n", Length * Width );
	return 0;
}


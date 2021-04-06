// Includes a do while Loop. 
// Includes function. 
// Includes array and function pointer. 
// Includes structure.
// DOESN'T PRINT CORRECT RESULTS!

#include <stdio.h>

// Structure 
struct variables {
	int a;
	int b;
}; int(*ope[4]);

// Function Prototypes 
void add(int num1, int num2);
void sub(int num1, int num2);
void mult(int num1, int num2);
void div(int num1, int num2);

// Function for Displaying the Menu
void menu()
{
	printf("\n0. Addition\n");
	printf("1. Subtraction\n");
	printf("2. Multiplication\n");
	printf("3. Division\n");
	printf("4. Exit\n");
	printf("\n\n");
	printf("Enter the Number for the Operator: \n");
}

// Main Function 
int main()
{
	struct variables* variablesPtr, (*ope[4]);
	variablesPtr = &ope[4];
	ope[0] = add;
	ope[1] = sub;
	ope[2] = mult;
	ope[3] = div;
	int a, b, choice, result;
	int solution, userInput;
	printf("Enter Two Numbers: \n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	// Do While Loop
	do
	{
		menu();
		scanf_s("%d", &choice);
		printf("\n");
		result = ope[choice];
		printf("Solution: %d\n", result);
		printf("\nAgain? No, enter 4 for exit!\n");
		scanf_s("%d", &userInput);
	} while (userInput != 4);

	return 0;
}

void add(int a, int b)
{
	return(a + b);
	printf("%d\n", a + b);
}
void sub(int a, int b)
{
	return(a - b);
	printf("%d\n", a - b);
}
void mult(int a, int b)
{
	return(a * b);
	printf("%d\n", a * b);
}
void div(int a, int b)
{
	// If-Else Statement 
	if (b != 0) {
		return(a / b);
	}
	else {
		return 0;
	}
}


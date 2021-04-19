#include <stdio.h>

// Structure 
struct variables {
	int a;
	int b;
} results;

// Function Prototypes
void addition(int num1, int num2);
void subtraction(int num1, int num2);
void multiplication(int num1, int num2);
void division(int num1, int num2);

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
	int (*ope[4])(int, int);
	ope[0] = addition;
	ope[1] = subtraction;
	ope[2] = multiplication;
	ope[3] = division;
	int choice, result;
	int userInput;
	printf("a = ");
	scanf_s("%d", &results.a);
	printf("b = ");
	scanf_s("%d", &results.b);

	// Do While Loop
	do
	{
		menu();
		scanf_s("%d", &choice);
		printf("\n");
		result = ope[choice](&results.a, &results.b);
		printf("Solution: %d\n", result);
		printf("\nAgain? No, enter 4 for exit! Enter 5 to continue.\n");
		scanf_s("%d", &userInput); 
		if (userInput == 4) {
			break; }

		printf("\na = ");
		scanf_s("%d", &results.a);
		printf("b = ");
		scanf_s("%d", &results.b);
	} while (userInput != 4);

	return 0;
}

// Function Declarations
void addition(int a, int b)
{
	return(results.a + results.b);
	printf("%d", results.a + results.b);
}
void subtraction(int a, int b)
{
	return(results.a - results.b);
	printf("%d", results.a - results.b);
}
void multiplication(int a, int b)
{
	return(results.a * results.b);
	printf("%d", results.a * results.b);
}
void division(int a, int b)
{ 
	// If-Else Statement
	if (results.b != 0) {
		return(results.a / results.b);
	}
	else {
		return 0; 
	}
}


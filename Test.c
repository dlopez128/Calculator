// Includes a do while Loop. 
// Includes function. 
// Includes array and function pointer. 

#include <stdio.h>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

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
	int a, b, choice, result;
	int (*ope[4])(int, int);
	ope[0] = sum;
	ope[1] = sub;
	ope[2] = mult;
	ope[3] = div;
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
		result = ope[choice](a, b);
		printf("Solution: %d\n", result);
		printf("\nAgain? No, enter 4 for exit!\n");
		scanf_s("%d", &userInput);
	} while (userInput != 4);

	return 0;
}

int sum(int a, int b)
{
	return(a + b);
	printf("%d\n", a + b);
}
int sub(int a, int b)
{
	return(a - b);
	printf("%d\n", a - b);
}
int mult(int a, int b)
{
	return(a * b);
	printf("%d\n", a * b);
}
int div(int a, int b)
{
	return(a / b);
	printf("%d\n", a / b);
}


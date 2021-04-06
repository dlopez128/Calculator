// This code includes a Do While Loop and decision. 
// Included function. 
// Didn't add division error. 
// No pointer or array. 

#include <stdio.h>
#include <stdlib.h>

// Function for Displaying the Menu
// Function changed to void because they don't need to return anything
void menu()
{
	printf("\n1. Addition\n"); 
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("\n\n");
	printf("Enter the Number for the Operator : \n");
}

// Function for Calculating Results
void  calc(int a, int b, int operatorselection)
{
	int result = 0;
	double div = 0; 

	// Switch Statement
	switch (operatorselection) {
		case 1:
			result = a + b;
			printf("%d\n", result);
			break;
		case 2:
			result = a - b;
			printf("%d\n", result);
			break;
		case 3:
			result = a * b;
			printf("%d\n", result);
			break;
		case 4:
			div = (double)a / b;
			printf("0.2f\n", div);
			break; 
		default: 
			break; 
	}
}

// Main Function
int main()
{
	// Variables and Initialization 
	// Added New Variables 
	int a, b; 
	int solution, userInput;
	int operationselection;
	printf("Enter Two Numbers: \n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	// Do While Loop 
	do 
	{
		menu();
		scanf_s("%d", &operationselection);
		printf("\n");
		printf("Solution: ");
		calc(a, b, operationselection);
		printf("\nAgain? No, enter 5 for exit!\n");
		scanf_s("%d", &userInput);
	} while (userInput != 5); // I changed the while loop expression to != 5 because this will allow the program to exit when the user enters 5. 

	return 0;
}


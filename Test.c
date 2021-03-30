// This code includes a Do While Loop and decision. 
// Included function. 
// Didn't add division error. 
// No pointer or array. 

#include <stdio.h>
#include <stdlib.h>

// Main Function
int main()
{
	// Variales and Initialization
	int a, b;
	printf("Enter Two Numbers: \n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	// Do While Loop
	int ans;

	do
	{
		int menu(int a, int b, int operatorselection);
		int calc(int a, int b);
		printf("Again? No, enter 5 for exit!\n");
		scanf_s("%d", &ans);
	} while (ans == 1);

	return 0;
}

// Function for Displaying the Menu
int menu(int a, int b, int operatorselection)
{
	printf("\n1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("\n\n");
	printf("Enter the Number for the Operator: \n");
	scanf_s("%d", &operatorselection);
}

// Function for Calculating Results 
int calc(int a, int b)
{
	int operatorselection = 2, result; 

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
		result = a / b;
		printf("%d\n", result);
		break;
		case 5:
		printf("End, Thank You!\n");
		exit(0);
	}
}


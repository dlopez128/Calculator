// This code includes a Do While Loop and decision. 
// My SECOND attempt. 
// Included function. 
// Didn't add division error. 

#include <stdio.h>
#include <conio.h>

int main()
{
	// Variables and initialization 
	int i, a, b, choice, result; 
	void menu(int a, int b, int choice);
	printf("Enter Two Numbers: \n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	// While Loop
	i = 0; 
	while (choice != 5)
	{
		menu(a, b, choice);
		i++; 
	}

	getchar();
	return 0;
	
}

void menu(int a, int b, int choice)
{
	int result, i;

	// Infinite Loop 
	for (i = 0; i < 10; ++i)
	{
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("\n\n");
		printf("Enter the Number for the Operator: \n");
		scanf_s("%d", &choice);
	}

	// Switch Operator
	switch (choice) 
	{
	case '+':
		printf("result = %d\n", a + b);
		break;
	case '-':
		printf("result = %d\n", a - b);
		break; 
	case '*':
		printf("result = %d\n", a * b);
		break;
	case '/':
		printf("result = %d\n", a / b);
		break; 
	default:
		exit(0);

	}
}
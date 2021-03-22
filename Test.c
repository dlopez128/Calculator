// This code includes a Do While Loop and decision. 
// My first attempt. 
// Didn't include function. 
// Add division error. 

#include <stdio.h>

int main()
{
	// Variables and initialization 
	int a = 5, b = 2, result;
	char operator;

	// Do While Loop
	do {
		printf("\nEnter an operator: \n");
		printf("Exit\n");

		scanf_s("%c", &operator);
		fflush(stdin);

		switch (operator) {
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

		case '5':
			printf("Thanks\n");
			break; 

		}
	}

	while (operator != '5');

	return 0; 
	
}
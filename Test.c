#include <stdio.h>

int main()
{
	// Variables and initialization 
	int a = 5, b = 2, result;
	char operator;

	do {
		printf("\nEnter an operator: ");
		scanf_s("%c", &operator);

		switch (operator) {
		case '+':
			printf("result = %d", a + b);
			break;

		case '-':
			printf("result = %d", a - b);
			break;

		case '*':
			printf("result = %d", a * b);
			break;

		case '/':
			printf("result = %d", a / b);
			break;
		}
	}

	while (operator != 1); 
	
	return 0; 

}
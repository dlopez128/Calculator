#include <stdio.h>

int main()
{
	// Variables and initialization 
	int a, b;
	char operator;
	int finished = 0;

	// User types in expression. 
	printf("\nEnter two operands: \n");
	scanf_s("%d %d", &a, &b);

	// Print Results
	switch (operator) {
	case '+':
		printf("%d\n", a + b);
		break;

	case '-':
		printf("%d\n", a - b);
		break;

	case '*':
		printf("%d\n", a * b);
		break;

	case '/':
		printf("%d\n", a / b);
		break;

	}

	while (!finished)
	{
		printf("\nEnter an operator: \n");
		scanf_s("%c", &operator);
		getchar();
		printf("\nEnter two operands: \n");
		scanf_s("%d %d", &a, &b);

		getchar();
	}

	return 0;

}
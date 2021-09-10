#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/

int main()
{
	double num1;
	double num2;
	char op;

	printf("Enter a number: " );
	scanf("%lf", &num1);

	printf("Enter a operator: " );
	scanf(" %c", &op);

	printf("Enter a number: " );
	scanf("%lf", &num2);

	if(op == '+'){
		printf("%f", num1 + num2);
	} else if(op =='-') {
		printf("%f", num1 - num2);
	} else if(op =='/') {
		printf("%f", num1 / num2);
	} else if(op =='*') {
		printf("%f", num1 * num2);
	} else {
		printf("Invalid option");
	}


	return 0;
}

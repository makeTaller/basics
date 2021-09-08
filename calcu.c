#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	double num1;
	double num2;

	printf("Enter your first number: ");
	scanf("%lf", &num1);
	
	printf("Enter your second number: ");
	scanf("%lf", &num2);

	printf(" Total: %lf", num1 + num2);

	return 0;
}

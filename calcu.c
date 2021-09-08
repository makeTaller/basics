#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	int num1;
	int num2;

	printf("Enter your first number: ");
	scanf("%d", &num1);
	
	printf("Enter your second number: ");
	scanf("%d", &num2);

	printf(" Total: %d", num1 + num2);

	return 0;
}

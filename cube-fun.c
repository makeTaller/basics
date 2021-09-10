#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
double cube(double num){

	double result = num* num* num;
	return result;
}

int main()
{
	printf(" Enter a Number to cube:");
	printf(" Answer: %.2f", cube(3.0));

	return 0;
}

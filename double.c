#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	int age = 34;
	double gpa = 3.6;
	char grade = 'A';
	char name[] = "Kirk Tolliver";

	printf(" Hello Kirk, your %d\n gpa: %f\n grade: %c\n %s your my guy\n", age, gpa, grade, name );

	return 0;
}



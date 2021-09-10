#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{

	int age = 30;
	double gpa = 3.4;
	char grade = 'B';
	
	printf("%p\nage: ", &age);
	printf("%p\ngpa: ", &gpa);
	printf("%p\ngrade: ", &grade);


	return 0;
}


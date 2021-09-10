#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{

	int age = 30;
	int * pAge = &age;

	double gpa = 3.4;
	double * pGpa = &gpa;

	char grade = 'B';
	char * aGrade = &grade;

	
	printf("%p\nage: ", &age);
	printf("%p\ngpa: ", &gpa);
	printf("%p\ngrade: ", *&grade);
	printf("%p\n: ", &grade);


	return 0;
}


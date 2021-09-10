
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
	struct Student{
		char name [50];
		char major [50];
		int age;
		double gpa;
	};

	 int main()
{
		struct Student student1;
		student1.age = 34;
		student1.gpa = 3.7;
		strcpy(student1.major,"Computer Science");
		strcpy(student1.name,"Darrel Jackdon");

		printf("student name: %s\n", student1.name);
		printf("student major: %s\n", student1.major);
		printf("student age: %d\n", student1.age);
		printf("student gpa: %.2f\n", student1.gpa);

		return 0;

}


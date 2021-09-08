#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	char name[20];

	printf("Enter your name: ");
	fgets(name,20,stdin);
	printf(" \n You are %s", name);

	return 0;
}

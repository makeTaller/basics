#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	char line[255];
	FILE * fpointer = fopen("employess.txt", "r");	

	fgets(line,255,fpointer);
	printf("%s", line);

	fclose(fpointer);

	return 0;
}


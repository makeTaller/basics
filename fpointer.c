#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	FILE * fpointer = fopen("employess.txt", "w");	

	fprintf(fpointer, "Kirk, Entrepreur\n, Janien Ex girl\n, Rosie Parent\n");
	fclose(fpointer);

	return 0;
}


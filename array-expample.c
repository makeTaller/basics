#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	char name[20] = "Kirk Tolliver";
	int luckNum[] = {4,8,123,34,535,234,12};

	printf("%c", name[2]);
	printf("%d", luckNum[4]);

	return 0;
}

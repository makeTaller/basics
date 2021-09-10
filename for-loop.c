#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{

	int luckyNumbers[] = { 3,43,12,8,7,10};
	int j;
	for(j =1; j <= 8; j++){
		printf("%d\n", luckyNumbers[j]);
	}
			return 0;
}

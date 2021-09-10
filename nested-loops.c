#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{

	int nums[2][6] = {{123,983,234,985,774,32},{244,213,2345,321346,8476,12}};
	int j,i;

	for(j=0; j <= 2;j++){
		for(i=0; i <= 6;i++){
			printf("%d\n", nums[j][i]);
		}
			printf("\n");
	}
			return 0;
}

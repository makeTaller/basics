
#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	char grade =  'C';

	switch(grade){
	case 'A' :
		printf("You did great!");
		break;
	case 'B' :
		printf("Good job!");
		break;
	case 'C' :
		printf("You did can do better!");
		break;
	case 'D' :
		printf("You did need to focus!");
		break;
	case 'F' :
		printf("You didn't pass!");
		break;
	 default:
		printf(" Not a valid option");
	}
	return 0;

}

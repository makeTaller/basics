#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	char color[20];
	char pluralNoun[20];
	char celebrity[20];

	printf("Enter a color: " );
	fgets(color,20,stdin);

	printf("Enter a pluralNoun: " );
	fgets(pluralNoun,20,stdin);

	printf("Enter a celebrity: " );
	fgets(celebrity,20,stdin);

	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s\n", celebrity);

	return(0);

}

#include <stdio.h>
#include <stdlib.h>

char uname[20];

int main()
{
	char myname[20];
	fgets(myname,20,stdin);

	sayHi(myname);
	return 0;
}

void sayHi(char uname[]){
 printf("Hello %s", uname);
}

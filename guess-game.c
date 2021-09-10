#include <stdio.h>
#include <stdlib.h>

/* Description: Simple format statements
 * Author: Kirk Tolliver
*/
int main()
{
	int guess;
  int secretNumber =5;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while(guess != secretNumber && outOfGuesses ==0 ){
		if(guessCount < guessLimit){
				printf("Enter a number: ");
				scanf("%d", &guess);
				guessCount++;
		} else {
				outOfGuesses = 1;
		}
}
	if(outOfGuesses ==1){
		printf("Out of guesses");
	}esle {
		printf("You win!");
	}
			return 0;
}

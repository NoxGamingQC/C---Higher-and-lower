#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	const MAX_NUMBER = 100, MIN_NUMBER = 1;
	int number = 0;
	int guessedNumber;

	srand(time(NULL));
	number = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;

	printf("Enter a number:");
	scanf_s("%d", &guessedNumber);
	printf("\n");
	while (guessedNumber != number)
	{
		if (guessedNumber < number) {
			printf("The number is higher than %d\n\n", guessedNumber);
		} else if (guessedNumber > number) {
			printf("The number is lower than %d\n\n", guessedNumber);
		}
		printf("Enter a number:");
		scanf_s("%d", &guessedNumber);
		printf("\n");
	}

	printf("You found the number congratulation!\n\n");

	system("pause");

	return 0;
}

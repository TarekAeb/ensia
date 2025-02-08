#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	srand(time(NULL));
	int random = rand() % 101;
	for (int i = 0; i < 10; i++)
	{
		printf("Enter your guess: \n");
		int choice;
		scanf("%d", &choice);
		if (choice == random)
		{
			printf("Congrat You got it right.\n");
			return 0;
		}
		else if (choice < random)
		{
			printf("Your choice is less than the right guess.\n");
		}
		else
		{
			printf("your choice is greater than the right guess.\n");
		}
		while (getchar() != '\n')
		{
		} // Flush the input buffer
	}
	printf("You lose try another time.\n");
	return 0;
}

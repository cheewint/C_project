#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void result(int a, int b, int *x, int *y, int *z);

int samsam(void)
{
	char c = '.';
	int i, j, k, start, round;
	int x = 0, y = 0, z = 0;
	const char *a[3] = { "Rock", "Paper", "Scissors" };
	const char *b[3] = { "Rock", "Paper", "Scissors" };

	srand(time(0));

	printf("Rock¡Vpaper¡Vscissors Game\n~~~~~~~~~~~~~~~~~~~~~~~~~~\nPress Enter to start");

	while (1){
		scanf_s("%c", &c);
		if (c == '\n'){
			break;
		}
	}

	printf("\nChoose the number of round you like to play:");
	scanf_s("%d", &round);

	for (j = 1; j <= round; j++)
	{
		printf("\n---------------------------------------------------\n\nRound%d\n", j);
		printf("\nChoose your weapon: Rock[0], Paper[1], Scissors[2]\n");
		scanf_s("%d", &i);
		if (i > 2 || i < 0){ j--; printf("input error!!\n"); continue; }
		printf("\nYou chose the %s\n", a[i]);
		k = rand() % 3;
		printf("And your opponent chose the %s\n\n", b[k]);

		result(i, k, &x, &y, &z);
	}

	printf("\n---------------------------------------------------\n\nWins:%d\nDraws:%d\nLose:%d\n\n", x, z, y);
	printf("Your sorce: %d/%d\n\n", (x * 2 + z), round * 2);

	system("pause");
	return 0;
}

void result(int a, int b, int *x, int *y, int *z)
{
	if (a == b){ printf("Draw"); (*z)++; }
	else if (a == 0 && b == 2) { printf("You win!"); (*x)++; }
	else if (a == 2 && b == 0) { printf("You lose!"); (*y)++; }
	else if (a == 1 && b == 0) { printf("You win!"); (*x)++; }
	else if (a == 0 && b == 1) { printf("You lose!"); (*y)++; }
	else if (a == 2 && b == 1) { printf("You win!"); (*x)++; }
	else if (a == 1 && b == 2) { printf("You lose!"); (*y)++; }
}


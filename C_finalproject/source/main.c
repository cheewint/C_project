#include<stdio.h>
#include<stdlib.h>
#include"Header1.h"
#include"Header2.h"
#include"Header3.h"
#include"Header4.h"



int main(void)
{
	int game;
	printf("請選擇遊戲,1:終極密碼  2.剪刀石頭布 3.老虎機遊戲 4.買大買小買鬼啊  \n");
	scanf_s("%d", &game);
	switch (game)
	{
	case 1:
		bingo();
		break;
	case 2:
		samsam();
		break;
	case 3:
		slotmachinebyjinster();
		break;
	case 4:
		dice();
		break;

	default:
		printf("\n\nBYE BYE\n\n");
		system("pause");
		return 0;
	}

	printf("\n");
	return main();
}
#include<stdio.h>
#include<stdlib.h>
#include"Header1.h"
#include"Header2.h"
#include"Header3.h"
#include"Header4.h"



int main(void)
{
	int game;
	printf("�п�ܹC��,1:�׷��K�X  2.�ŤM���Y�� 3.�Ѫ���C�� 4.�R�j�R�p�R����  \n");
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
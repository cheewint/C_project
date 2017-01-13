#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bingo()

{
	int a, bingo;
	int max = 100;
	int min = 1;
	printf("終極密碼遊戲,請輸入1-100範圍以內的數字(不包括1及100) \n");
	scanf_s("%d", &a);
	srand(time(NULL));
	bingo = 2 + rand() % 98;
	while (a <= min || a >= max)
	{
		printf("輸入資料錯誤,請重新輸入\n");
		printf("終極密碼遊戲,請輸入1-100範圍以內的數字(不包括1及100)\n");
		scanf_s("%d", &a);
	}
	if (a == bingo)
		printf("終極密碼是%d,你猜中了\n", bingo);
	while (a != bingo && a >= min && a <= max)
	{
		if (a < bingo)
		{
			min = a;
			printf("你猜錯了,請輸入%d-%d的數字範圍(不包括%d及%d)", min, max, min, max);
			scanf_s("%d", &a);
			while (a <= min || a >= max)
			{
				printf("輸入資料錯誤,請重新輸入\n");
				scanf_s("%d", &a);
			}
		}
		else
		{
			max = a;
			printf("你猜錯了,請輸入%d-%d的數字範圍(不包括%d及%d)", min, max, min, max);
			scanf_s("%d", &a);
			while (a <= min || a >= max)
			{
				printf("輸入資料錯誤,請重新輸入\n");
				scanf_s("%d", &a);
			}
		}

	}
	if (a == bingo)
		printf("你猜對了,終極密碼是%d\n", bingo);
	system("pause");
	return 0;
}
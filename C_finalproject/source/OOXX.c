#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 


int slotmachinebyjinster(void) //main 
{
	int i;
	int wheel_1 = 0;
	int wheel_2 = 0;
	int wheel_3 = 0;
	int inputnum;
	printf("    $$$$$$$    $              $$$$$$$     $$$$$$$$$$$      M\n");
	printf("   $           $             $       $         $           A\n");
	printf("  $            $            $         $        $           C\n");
	printf("  $            $            $         $        $           H\n");
	printf("  $            $            $         $        $           I\n");
	printf("   $           $            $         $        $           N\n");
	printf("    $$$$$$$    $            $         $        $           3\n");
	printf("           $   $            $         $        $            \n");
	printf("            $  $            $         $        $           B\n");
	printf("            $  $            $         $        $           Y\n");
	printf("            $  $            $         $        $            \n");
	printf("           $   $             $       $         $           9\n");
	printf("    $$$$$$$    $$$$$$$$$$$    $$$$$$$          $           4\n");
	printf("\nPlease enter how many times you want to try your luck:");
	scanf_s("%d", &inputnum);

	for (i = 0; i < inputnum; i++)
	{
		int wheel1 = 0, wheel2 = 0, wheel3 = 0;
		int getrich;

		printf("Do you want to get rich now? [ 1 for yes, 0 for no]\n");
		scanf("%d", &getrich);

		if (getrich == 1)
		{
			srand((unsigned)time(NULL));

			wheel1 = rand() % 6;
			wheel2 = rand() % 6;
			wheel3 = rand() % 6;

			switch (wheel1)
			{
			case 0:
				puts("Wheel 1 = Cherry");
				break;

			case 1:
				puts("Wheel 1 = Apple");
				break;

			case 2:
				puts("Wheel 1 = Wine Glass");
				break;

			case 3:
				puts("Wheel 1 = Lucky Seven");
				break;

			case 4:
				puts("Wheel 1 = DickButt");
				break;

			case 5:
				puts("Wheel 1 = Jinster420");
				break;

			default:
				break;
			}

			switch (wheel2)
			{
			case 0:
				puts("Wheel 2= Cherry");
				break;

			case 1:
				puts("Wheel 2 = Apple");
				break;

			case 2:
				puts("Wheel 2 = Wine Glass");
				break;

			case 3:
				puts("Wheel 2 = Lucky Seven");
				break;

			case 4:
				puts("Wheel 2 = DickButt");
				break;

			case 5:
				puts("Wheel 2 = Jinster420");
				break;

			default:
				break;
			}

			switch (wheel3)
			{
			case 0:
				puts("Wheel 3 = Cherry");
				break;

			case 1:
				puts("Wheel 3 = Apple");
				break;

			case 2:
				puts("Wheel 3 = Wine Glass");
				break;

			case 3:
				puts("Wheel 3 = Lucky Seven");
				break;

			case 4:
				puts("Wheel 3 = DickButt");
				break;

			case 5:
				puts("Wheel 3 = Jinster420");
				break;

			default:
				break;
			}

			if ((wheel1 == wheel2) || (wheel2 == wheel3) || (wheel1 == wheel3))
				printf("\nSo close, yet so far....\nBetter luck next time!");

			if ((wheel1 == wheel2) && (wheel2 == wheel3))
			{
				printf("       $       $        $        $     $$$$$$$$$$$    $          $        $          \n");
				printf("    $$$$$$$    $       $ $       $          $         $$         $     $$$$$$$       \n");
				printf("   $   $       $       $ $       $          $         $ $        $    $   $          \n");
				printf("  $    $       $       $ $       $          $         $  $       $   $    $          \n");
				printf("  $    $        $     $   $     $           $         $   $      $   $    $          \n");
				printf("  $    $        $     $   $     $           $         $   $      $   $    $          \n");
				printf("   $   $        $     $   $     $           $         $    $     $    $   $          \n");
				printf("    $$$$$$$     $     $   $     $           $         $     $    $     $$$$$$$       \n");
				printf("       $   $     $   $     $   $            $         $      $   $        $   $      \n");
				printf("       $    $    $   $     $   $            $         $      $   $        $    $     \n");
				printf("       $    $    $   $     $   $            $         $      $   $        $    $     \n");
				printf("       $    $    $   $     $   $            $         $       $  $        $    $     \n");
				printf("       $   $      $ $       $ $             $         $        $ $        $   $      \n");
				printf("    $$$$$$$       $ $       $ $             $         $         $$     $$$$$$$       \n");
				printf("       $          $           $        $$$$$$$$$$$    $          $        $          \n");
			}

			else
				printf("\nLoser!\n");
		}
		else
		{
			printf("Stay poor then!\n");
		}
	}
	system("pause");
	return 0;
}

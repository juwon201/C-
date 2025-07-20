#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct SNACK {
	int price;
	int stock;
	char name[20];
};
void main()
{
	int choice;
	int money = 0;
	const int N = 3;

	SNACK snacks[N] = { {1500,3,"불고기 버거"},{1000,2,"새우 버거"},{2000,4,"모짜렐라 치즈 버거"} };

	printf("<< 햄버거자판기 ! >>\n");

	for (int i = 0; i < N; i++)
		printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
	printf("남은 금액 : %d원\n", money);

	
	while(1)
	{
		printf("\n금액 입력 : ");
		scanf("%d", &money);

		if (money < 0)
			printf("잘못 입력하였습니다 .\n");
		else
			break;
	}

	while (1)
	{
		printf("\n번호 입력 ( '0' 입력 시 종료 ) : ");
		scanf("%d", &choice);

		if (choice == '0')
		{
			printf("프로그램을 종료합니다 .\n");
			printf("넣은 돈이 반환됩니다 .\n");
			break;
		}

		if (snacks[choice - 1].stock == 0)
		{
			printf("재고가 없습니다. 다른 품목을 선택해주세요 .\n");
		}
		else
		{
			if (money < snacks[choice - 1].price)
			{
				printf("돈이 부족합니다.\n");
				printf("돈을 더 넣으시겠습니까 ? ( y / n ) : ");

				char ch1;
				do {
					ch1 = getchar();
				} while (ch1 != 'y' && ch1 != 'n');
				if (ch1 == 'n')
				{
					printf("\n거스름돈 %d원이 반환되었습니다.\n", money);
					break;
				}

				int plus;
				printf("얼마를 더 넣으시겠습니까 ? : ");
				scanf("%d", &plus);

				money += plus;

				printf("\n<< 햄버거자판기 ! >>\n");

				for (int i = 0; i < N; i++)
					printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
				printf("남은 금액 : %d원\n", money);
			}
			else
			{
				money -= snacks[choice - 1].price;
				snacks[choice - 1].stock -= 1;
				printf("%s(이)가 나왔습니다.\n", snacks[choice - 1].name);
				printf("남은 금액 : %d원\n", money);
				printf("더 구매하시겠습니까 ? ( y / n ) : ");
				
				char ch2;
				do {
					ch2 = getchar();
				} while (ch2 != 'y' && ch2 != 'n');
				if (ch2 == 'n')
				{
					printf("\n거스름돈 %d원이 반환되었습니다.\n", money);
					break;
				}

				printf("\n<< 햄버거자판기 !>> \n");
				
				for (int i = 0; i < N; i++)
					printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
				printf("남은 금액 : %d원\n", money);
			}
		}
	}
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	int choice;
//	int money = 0;
//	const int N = 3;
//	int plus;
//
//	SNACK snacks[N] = { {1500,3,"불고기 버거"},{1000,2,"새우 버거"},{2000,4,"모짜렐라 치즈 버거"} };
//
//	printf("<< 햄버거자판기 ! >>\n");
//
//	for (int i = 0; i < N; i++)
//		printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	
//	printf("남은 금액 : %d원\n", money);
//
//	while (1)
//	{
//		printf("\n금액 입력 : ");
//		scanf("%d", &money);
//
//		if (money <= 0)
//			printf("잘못 입력하였습니다 .\n");
//		
//		else
//			break;
//	}
//
//	while (1)
//	{
//		printf("\n번호 입력 ( 0 입력시 종료 ) : ");
//		scanf("%d", &choice);
//
//		if (choice == 0)
//		{
//			printf("프로그램을 종료합니다 .\n");
//			break;
//		}
//		
//		if (choice > N || choice < 0)
//		{
//			printf("다른 번호를 입력하였습니다 . 다시 입력해주세요 .\n");
//			continue;
//		}
//
//		if (snacks[choice - 1].stock == 0)
//		{
//			printf("재고가 없습니다. 다른 품목을 선택해주세요 .\n");
//			continue;
//		}
//		
//		if (money < snacks[choice - 1].price)
//		{
//			printf("돈이 부족합니다.\n");
//			printf("돈을 더 넣으시겠습니까 ? ( y / n ) : ");
//
//			char ch1;
//			do {
//				ch1 = getchar();
//			} while (ch1 != 'y' && ch1 != 'n');
//
//			if (ch1 == 'n')
//			{
//				printf("\n더 구매하시겠습니까 ? ( y / n ) : ");
//
//				char ch3;
//				do {
//					ch3 = getchar();
//				} while (ch3 != 'y' && ch3 != 'n');
//
//				if (ch3 == 'n')
//				{
//					printf("거스름돈 %d원을 반환합니다 .\n",money);
//					printf("프로그램을 종료합니다 .\n");
//					break;
//				}
//				continue;
//			}
//
//			while(1)
//			{
//				printf("\n얼마를 더 넣으시겠습니까 ? : ");
//				scanf("%d", &plus);
//
//				if (plus <= 0)
//				{
//					printf("잘못 입력하였습니다 .\n");
//					continue;
//				}
//				else
//					break;
//			}
//			money += plus;
//		}
//
//		else
//		{
//			money -= snacks[choice - 1].price;
//			snacks[choice - 1].stock -= 1;
//
//			printf("%s(이)가 나왔습니다.\n", snacks[choice - 1].name);
//			printf("남은 금액 : %d원\n", money);
//			printf("더 구매하시겠습니까 ? ( y / n ) : ");
//
//			char ch2;
//			do {
//				ch2 = getchar();
//			} while (ch2 != 'y' && ch2 != 'n');
//
//			if (ch2 == 'n')
//			{
//				printf("거스름돈 %d원을 반환합니다 .\n",money);
//				printf("프로그램을 종료합니다 .\n");
//				break;
//			}
//		}
//		
//		printf("\n<< 햄버거자판기 !>> \n");
//
//		for (int i = 0; i < N; i++)
//			printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//
//		printf("남은 금액 : %d원\n", money);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int* iptr = (int*)malloc(sizeof(int));
//	char* cptr = (char*)malloc(sizeof(char));
//	double* dptr = (double*)malloc(sizeof(double));
//	*iptr = 5;
//	*cptr = 'a';
//	*dptr = 3.5;
//	printf("%d, %c, %1f", *iptr, *cptr, *dptr);
//
//	free(iptr);
//	free(cptr);
//	free(dptr);
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr_1[5];
	int* arr_2;

	for (int i = 0; i < 5; i++)
		arr_1[i] = i + 1;

	arr_2 = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]);
	}

	free(arr_2);
	return 0;
}


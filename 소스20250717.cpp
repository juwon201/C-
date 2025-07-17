//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//COMPANY HireGM_once(COMPANY company)
//{
//	company.gms[company.gmCount].no = company.gmCount + 1;
//	
//
//	printf("이름을 입력해주세요 : ");
//	scanf("%s", company.gms[company.gmCount].name);
//
//	printf("파트를 입력해주세요 : ");
//	scanf("%d", &company.gms[company.gmCount].part);
//
//	printf("급여를 입력해주세요 : ");
//	scanf("%d", &company.gms[company.gmCount].salary);
//	
//	company.gmCount++;
//	return company;
//}
//void main()
//{
//	printf("게임을 출시해보자 !\n\n");
//	COMPANY gameCo;
//
//	printf("먼저 GM부터 고용할까 ?\n\n");
//
//	while (1)
//	{
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까 ? (Y / N) : ");
//		
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'Y' && ch != 'N');
//		if (ch == 'N')
//			break;
//		printf("\n");
//	}
//	printf("\n");
//	printf("GM %d명을 뽑았다 !\n", gameCo.gmCount);
//}

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
	int money;
	const int N = 3;

	SNACK snacks[N] = { {1500,3,"불고기 버거"},{1000,2,"새우 버거"},{2000,4,"모짜렐라 치즈 버거"} };

	printf("<< 햄버거자판기 ! >>\n");
	
	for (int i = 0; i < N; i++)
		printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);

	printf("\n금액 입력 : ");
	scanf("%d", &money);

	while(1)
	{
		printf("\n번호 입력 ( '0' 입력 시 종료 ) : ");
		scanf("%d", &choice);

		if (choice == '0')
		{
			printf("프로그램을 종료합니다 .\n");
			printf("넣은 돈이 반환됩니다 .\n");
			break;
		}

		if (snacks[choice - 1].stock <= 0)
		{
			printf("재고가 없습니다. 다른 품목을 선택해주세요 .\n");
		}
		else
		{
			if (money < snacks[choice - 1].price)
			{
				printf("돈이 부족합니다.\n");
				printf("돈을 더 넣으시겠습니까 ? ( Y / N ) : ");

				char ch1;
				do {
					ch1 = getchar();
				} while (ch1 != 'Y' && ch1 != 'N');
				if (ch1 == 'N')
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

			}
			else
			{
				money -= snacks[choice - 1].price;
				snacks[choice - 1].stock -= 1;
				printf("%s(이)가 나왔습니다.\n", snacks[choice - 1].name);
				printf("남은 금액 : %d원\n", money);
				printf("더 구매하시겠습니까 ? ( Y / N ) : ");
				char ch2;
				do {
					ch2 = getchar();
				} while (ch2 != 'Y' && ch2 != 'N');
				if (ch2 == 'N')
				{
					printf("\n거스름돈 %d원이 반환되었습니다.\n", money);
					break;
				}

				printf("\n<< 햄버거자판기 !>> \n");

				for (int i = 0; i < N; i++)
					printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
			}
		}
	}
}

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

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr_1[5];
//	int* arr_2;
//
//	for (int i = 0; i < 5; i++)
//		arr_1[i] = i + 1;
//
//	arr_2 = (int*)malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		arr_2[i] = arr_1[i];
//		printf("%d ", arr_2[i]);
//	}
//
//	free(arr_2);
//	return 0;
//}


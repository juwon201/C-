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
//	SNACK snacks[N] = { {1500,3,"�Ұ�� ����"},{1000,2,"���� ����"},{2000,4,"��¥���� ġ�� ����"} };
//
//	printf("<< �ܹ������Ǳ� ! >>\n");
//
//	for (int i = 0; i < N; i++)
//		printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	
//	printf("���� �ݾ� : %d��\n", money);
//
//	while (1)
//	{
//		printf("\n�ݾ� �Է� : ");
//		scanf("%d", &money);
//
//		if (money <= 0)
//			printf("�߸� �Է��Ͽ����ϴ� .\n");
//		
//		else
//			break;
//	}
//
//	while (1)
//	{
//		printf("\n��ȣ �Է� ( 0 �Է½� ���� ) : ");
//		scanf("%d", &choice);
//
//		if (choice == 0)
//		{
//			printf("���α׷��� �����մϴ� .\n");
//			break;
//		}
//		
//		if (choice > N || choice < 0)
//		{
//			printf("�ٸ� ��ȣ�� �Է��Ͽ����ϴ� . �ٽ� �Է����ּ��� .\n");
//			continue;
//		}
//
//		if (snacks[choice - 1].stock == 0)
//		{
//			printf("��� �����ϴ�. �ٸ� ǰ���� �������ּ��� .\n");
//			continue;
//		}
//		
//		if (money < snacks[choice - 1].price)
//		{
//			printf("���� �����մϴ�.\n");
//			printf("���� �� �����ðڽ��ϱ� ? ( y / n ) : ");
//
//			char ch1;
//			do {
//				ch1 = getchar();
//			} while (ch1 != 'y' && ch1 != 'n');
//
//			if (ch1 == 'n')
//			{
//				printf("\n�� �����Ͻðڽ��ϱ� ? ( y / n ) : ");
//
//				char ch3;
//				do {
//					ch3 = getchar();
//				} while (ch3 != 'y' && ch3 != 'n');
//
//				if (ch3 == 'n')
//				{
//					printf("�Ž����� %d���� ��ȯ�մϴ� .\n",money);
//					printf("���α׷��� �����մϴ� .\n");
//					break;
//				}
//				continue;
//			}
//
//			while(1)
//			{
//				printf("\n�󸶸� �� �����ðڽ��ϱ� ? : ");
//				scanf("%d", &plus);
//
//				if (plus <= 0)
//				{
//					printf("�߸� �Է��Ͽ����ϴ� .\n");
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
//			printf("%s(��)�� ���Խ��ϴ�.\n", snacks[choice - 1].name);
//			printf("���� �ݾ� : %d��\n", money);
//			printf("�� �����Ͻðڽ��ϱ� ? ( y / n ) : ");
//
//			char ch2;
//			do {
//				ch2 = getchar();
//			} while (ch2 != 'y' && ch2 != 'n');
//
//			if (ch2 == 'n')
//			{
//				printf("�Ž����� %d���� ��ȯ�մϴ� .\n",money);
//				printf("���α׷��� �����մϴ� .\n");
//				break;
//			}
//		}
//		
//		printf("\n<< �ܹ������Ǳ� !>> \n");
//
//		for (int i = 0; i < N; i++)
//			printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//
//		printf("���� �ݾ� : %d��\n", money);
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


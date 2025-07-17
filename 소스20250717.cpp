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
//	printf("�̸��� �Է����ּ��� : ");
//	scanf("%s", company.gms[company.gmCount].name);
//
//	printf("��Ʈ�� �Է����ּ��� : ");
//	scanf("%d", &company.gms[company.gmCount].part);
//
//	printf("�޿��� �Է����ּ��� : ");
//	scanf("%d", &company.gms[company.gmCount].salary);
//	
//	company.gmCount++;
//	return company;
//}
//void main()
//{
//	printf("������ ����غ��� !\n\n");
//	COMPANY gameCo;
//
//	printf("���� GM���� ����ұ� ?\n\n");
//
//	while (1)
//	{
//		gameCo = HireGM_once(gameCo);
//		printf("�� ����ұ� ? (Y / N) : ");
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
//	printf("GM %d���� �̾Ҵ� !\n", gameCo.gmCount);
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

	SNACK snacks[N] = { {1500,3,"�Ұ�� ����"},{1000,2,"���� ����"},{2000,4,"��¥���� ġ�� ����"} };

	printf("<< �ܹ������Ǳ� ! >>\n");
	
	for (int i = 0; i < N; i++)
		printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);

	printf("\n�ݾ� �Է� : ");
	scanf("%d", &money);

	while(1)
	{
		printf("\n��ȣ �Է� ( '0' �Է� �� ���� ) : ");
		scanf("%d", &choice);

		if (choice == '0')
		{
			printf("���α׷��� �����մϴ� .\n");
			printf("���� ���� ��ȯ�˴ϴ� .\n");
			break;
		}

		if (snacks[choice - 1].stock <= 0)
		{
			printf("��� �����ϴ�. �ٸ� ǰ���� �������ּ��� .\n");
		}
		else
		{
			if (money < snacks[choice - 1].price)
			{
				printf("���� �����մϴ�.\n");
				printf("���� �� �����ðڽ��ϱ� ? ( Y / N ) : ");

				char ch1;
				do {
					ch1 = getchar();
				} while (ch1 != 'Y' && ch1 != 'N');
				if (ch1 == 'N')
				{
					printf("\n�Ž����� %d���� ��ȯ�Ǿ����ϴ�.\n", money);
					break;
				}

				int plus;
				printf("�󸶸� �� �����ðڽ��ϱ� ? : ");
				scanf("%d", &plus);

				money += plus;

				printf("\n<< �ܹ������Ǳ� ! >>\n");

				for (int i = 0; i < N; i++)
					printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);

			}
			else
			{
				money -= snacks[choice - 1].price;
				snacks[choice - 1].stock -= 1;
				printf("%s(��)�� ���Խ��ϴ�.\n", snacks[choice - 1].name);
				printf("���� �ݾ� : %d��\n", money);
				printf("�� �����Ͻðڽ��ϱ� ? ( Y / N ) : ");
				char ch2;
				do {
					ch2 = getchar();
				} while (ch2 != 'Y' && ch2 != 'N');
				if (ch2 == 'N')
				{
					printf("\n�Ž����� %d���� ��ȯ�Ǿ����ϴ�.\n", money);
					break;
				}

				printf("\n<< �ܹ������Ǳ� !>> \n");

				for (int i = 0; i < N; i++)
					printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
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


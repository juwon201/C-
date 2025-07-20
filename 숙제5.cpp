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

	SNACK snacks[N] = { {1500,3,"�Ұ�� ����"},{1000,2,"���� ����"},{2000,4,"��¥���� ġ�� ����"} };

	printf("<< �ܹ������Ǳ� ! >>\n");

	for (int i = 0; i < N; i++)
		printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
	printf("���� �ݾ� : %d��\n", money);

	
	while(1)
	{
		printf("\n�ݾ� �Է� : ");
		scanf("%d", &money);

		if (money < 0)
			printf("�߸� �Է��Ͽ����ϴ� .\n");
		else
			break;
	}

	while (1)
	{
		printf("\n��ȣ �Է� ( '0' �Է� �� ���� ) : ");
		scanf("%d", &choice);

		if (choice == '0')
		{
			printf("���α׷��� �����մϴ� .\n");
			printf("���� ���� ��ȯ�˴ϴ� .\n");
			break;
		}

		if (snacks[choice - 1].stock == 0)
		{
			printf("��� �����ϴ�. �ٸ� ǰ���� �������ּ��� .\n");
		}
		else
		{
			if (money < snacks[choice - 1].price)
			{
				printf("���� �����մϴ�.\n");
				printf("���� �� �����ðڽ��ϱ� ? ( y / n ) : ");

				char ch1;
				do {
					ch1 = getchar();
				} while (ch1 != 'y' && ch1 != 'n');
				if (ch1 == 'n')
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
				printf("���� �ݾ� : %d��\n", money);
			}
			else
			{
				money -= snacks[choice - 1].price;
				snacks[choice - 1].stock -= 1;
				printf("%s(��)�� ���Խ��ϴ�.\n", snacks[choice - 1].name);
				printf("���� �ݾ� : %d��\n", money);
				printf("�� �����Ͻðڽ��ϱ� ? ( y / n ) : ");
				
				char ch2;
				do {
					ch2 = getchar();
				} while (ch2 != 'y' && ch2 != 'n');
				if (ch2 == 'n')
				{
					printf("\n�Ž����� %d���� ��ȯ�Ǿ����ϴ�.\n", money);
					break;
				}

				printf("\n<< �ܹ������Ǳ� !>> \n");
				
				for (int i = 0; i < N; i++)
					printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
				printf("���� �ݾ� : %d��\n", money);
			}
		}
	}
}

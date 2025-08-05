#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXENERGY 6
void printenergy(int my)
{
	printf("�� ��� : ");
	for (int i = 0; i < my; i++)
		printf("��");
	for (int i = my; i < MAXENERGY; i++)
		printf("��");
	printf("\n");
}

char* getAnswer()
{
	FILE* rfp = fopen("word.txt", "r");
	char* p;
	char imsi[100];
	int num, size = 0;
	int k;
	int count = 0;

	srand((unsigned int)time(NULL));
	fscanf(rfp, "%d", &num);

	k = rand() % num + 2;

	while (1)
	{
		fgets(imsi, 100, rfp);
		count++;
		if (count == k)
		{
			break;
		}
	}
	fclose(rfp);

	size = strlen(imsi);
	imsi[size - 1] = NULL;

	p = (char*)malloc(sizeof(char) * size);
	strcpy(p, imsi);

	return p;
}

int main()
{
	char* Answer = getAnswer();
	int len = strlen(Answer);
	char* p = (char*)malloc(sizeof(char) * len + 1);
	char input;
	int energy = MAXENERGY;

	for (int i = 0; i < len; i++)
		p[i] = '_';
	p[len] = '\0';

	while (1)
	{
		printenergy(energy);

		if (energy == 0)
		{
			printf("���� ���� ... ���� : %s\n", Answer);
			break;
		}

		printf("�ܾ� : ");
		for (int i = 0; i < len; i++)
			printf("%c", p[i]);
		printf("\n");

		if (strcmp(p, Answer) == 0)
		{
			printf("���� �¸�! ���� : %s\n", Answer);
			break;
		}

		printf("���ĺ� �Է� : ");
		scanf(" %c", &input);

		bool check = true;
		for (int i = 0; i < len; i++)
		{
			if (input == Answer[i])
			{
				p[i] = input;
				check = false;
			}
		}
		if (check)
			energy--;
	}

	free(Answer);
	free(p);
	return 0;
}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int compare_victory(int com, int me)
//{
//	if (com == 0)
//	{
//		printf("��ǻ�� : ����\n\n");
//		if (me == 0)
//			return 2;
//		else if (me == 1)
//			return 1;
//		else if (me == 2)
//			return 0;
//	}
//	else if (com == 1)
//	{
//		printf("��ǻ�� : ����\n\n");
//		if (me == 0)
//			return 0;
//		else if (me == 1)
//			return 2;
//		else if (me == 2)
//			return 1;
//	}
//	else if (com == 2)
//	{
//		printf("��ǻ�� : ��\n\n");
//		if (me == 0)
//			return 1;
//		else if (me == 1)
//			return 0;
//		else if (me == 2)
//			return 2;
//	}
//}
//void main()
//{
//	FILE* wfp = fopen("rsp.txt", "w");
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//
//	srand(time(NULL));
//
//	while (true)
//	{
//		com = rand() % 3;
//		printf("0 : ����, 1 : ����, 2 : ��\n����� �� ���� ? : ");
//		scanf("%d", &me);
//		if (me == 0)
//			printf("��� : ����\n");
//		else if (me == 1)
//			printf("��� : ����\n");
//		else if (me == 2)
//			printf("��� : ��\n");
//		else
//		{
//			printf("\n��Ģ ! �ٽ� �� �ּ��� \n\n");
//			continue;
//		}
//		tmp = compare_victory(com, me);
//		if (tmp == 0)
//		{
//			printf("��ǻ�Ͱ� �̰���ϴ� .\n");
//			computer++;
//		}
//		else if (tmp == 1)
//		{
//			printf("����� �̰���ϴ�.\n");
//			human++;
//		}
//		else if (tmp == 2)
//		{
//			printf("�����ϴ� .\n");
//			draw++;
//		}
//
//		printf("\n����� �̱� Ƚ�� : %d, ", human);
//		printf("��ǻ�Ͱ� �̱� Ƚ�� : %d, ���� : %d\n\n", computer, draw);
//		printf("�ٽ� ������ �Ͻðڽ��ϱ� ? ( y / n ) : ");
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//
//		if (ask_finish == 'n')
//			break;
//		printf("\n");
//	}
//	fclose(wfp);
//}

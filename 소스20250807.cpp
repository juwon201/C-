//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#define MAXENERGY 7
//void printenergy(int my)
//{
//	printf("�� ��� : ");
//	for (int i = 0; i < my; i++)
//		printf("��");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("��");
//	printf("\n");
//}
//
//char* getAnswer()
//{
//	FILE* rfp = fopen("word.txt", "r");
//	char* real;
//	char imsi[100];
//	int num, size = 0;
//	int random;
//	
//	srand((unsigned int)time(NULL));
//	fscanf(rfp, "%d", &num);
//
//	random = rand() % num + 2;
//
//	for(int count = 0; count< random; count++)
//	{
//		fgets(imsi, 100, rfp);
//	}
//	fclose(rfp);
//
//	size = strlen(imsi);
//	imsi[size - 1] = NULL;
//
//	real = (char*)malloc(sizeof(char) * size);
//	strcpy(real, imsi);
//
//	return real;
//}
//
//int main()
//{
//	char* Answer = getAnswer();
//	int len = strlen(Answer);
//	char* sub_correct = (char*)malloc(sizeof(char) * len + 1);
//	char input;
//	int energy = MAXENERGY;
//	int correct = 0;
//
//	char wrong[MAXENERGY] = { 0 };
//	int wCount = 0;
//
//	for (int i = 0; i < len; i++)
//		sub_correct[i] = '_';
//	sub_correct[len] = '\0';
//
//	while (1)
//	{
//		printenergy(energy);
//
//		if (wCount > 0)
//		{
//			printf("Ʋ�� ���ĺ� : ");
//			for (int i = 0; i < wCount; i++)
//				printf("%c ", wrong[i]);
//			printf("\n");
//		}
//
//		if (energy == 0)
//		{
//			printf("���� ���� ... ���� : %s\n", Answer);
//			break;
//		}
//
//		printf("�ܾ� : ");
//		printf("%s", sub_correct);
//		printf("\n");
//
//		if (strcmp(sub_correct, Answer) == 0)
//		{
//			printf("���� �¸�! ���� : %s\n", Answer);
//			break;
//		}
//
//		printf("���ĺ� �Է� : ");
//		scanf(" %c", &input);
//		printf("\n");
//		bool check = true;
//		for (int i = 0; i < len; i++)
//		{
//			if (input == Answer[i])
//			{
//				sub_correct[i] = input;
//				check = false;
//			}
//		}
//		if (check)
//		{
//			wrong[wCount++] = input;
//			energy--;
//		}
//	}
//
//	free(Answer);
//	free(sub_correct);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int print_result(int what, const char*who)
{
	if (what == 0)
		printf("%s : ����\n", who);
	else if (what == 1)
		printf("%s : ����\n", who);
	else if (what == 2)
		printf("%s : ��\n", who);
	else
		return -1;
}
int compare_victory(int com, int me)
{
	print_result(com, "��ǻ��");

	if (me - com == 2 || me - com == -1)
		return 0;
	else if (me - com == 1 || me - com == -2)
		return 1;
	else if (me - com == 0)
		return 2;
}
void main()
{
	int com = 0;
	int me = 0;
	char ask_finish = 0;
	int human = 0, computer = 0, draw = 0;
	int tmp = 0;
	
	FILE* rfp = fopen("rsp.txt", "r");
	fscanf(rfp, "%d", &human);
	fscanf(rfp, "%d", &computer);
	fscanf(rfp, "%d", &draw);
	fclose(rfp);
	
	srand(time(NULL));
	while (true)
	{
		com = rand() % 3;
		printf("0 : ����, 1 : ����, 2 : ��\n����� �� ���� ? : ");
		scanf("%d", &me);
		if (print_result(me, "���") == -1)
		{
			printf("�ٽ� �Է��Ͻÿ� .\n\n");
			continue;
		}

		tmp = compare_victory(com, me);
		if (tmp == 0)
		{
			printf("��ǻ�Ͱ� �̰���ϴ� .\n");
			computer++;
		}
		else if (tmp == 1)
		{
			printf("����� �̰���ϴ�.\n");
			human++;
		}
		else if (tmp == 2)
		{
			printf("�����ϴ� .\n");
			draw++;
		}

		printf("\n����� �̱� Ƚ�� : %d, ", human);
		printf("��ǻ�Ͱ� �̱� Ƚ�� : %d, ���� : %d\n\n", computer, draw);
		printf("�ٽ� ������ �Ͻðڽ��ϱ� ? ( y / n ) : ");
		do {
			ask_finish = (char)getchar();
		} while (ask_finish == '\n');

		if (ask_finish == 'n')
			break;
		printf("\n");
	}
	FILE* wfp = fopen("rsp.txt", "w");
	fprintf(wfp, "%d\n%d\n%d\n", human, computer, draw);
	fclose(wfp);
}
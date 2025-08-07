//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#define MAXENERGY 7
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
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
//			printf("틀린 알파벳 : ");
//			for (int i = 0; i < wCount; i++)
//				printf("%c ", wrong[i]);
//			printf("\n");
//		}
//
//		if (energy == 0)
//		{
//			printf("게임 오버 ... 정답 : %s\n", Answer);
//			break;
//		}
//
//		printf("단어 : ");
//		printf("%s", sub_correct);
//		printf("\n");
//
//		if (strcmp(sub_correct, Answer) == 0)
//		{
//			printf("게임 승리! 정답 : %s\n", Answer);
//			break;
//		}
//
//		printf("알파벳 입력 : ");
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
		printf("%s : 가위\n", who);
	else if (what == 1)
		printf("%s : 바위\n", who);
	else if (what == 2)
		printf("%s : 보\n", who);
	else
		return -1;
}
int compare_victory(int com, int me)
{
	print_result(com, "컴퓨터");

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
		printf("0 : 가위, 1 : 바위, 2 : 보\n당신이 낼 것은 ? : ");
		scanf("%d", &me);
		if (print_result(me, "당신") == -1)
		{
			printf("다시 입력하시오 .\n\n");
			continue;
		}

		tmp = compare_victory(com, me);
		if (tmp == 0)
		{
			printf("컴퓨터가 이겼습니다 .\n");
			computer++;
		}
		else if (tmp == 1)
		{
			printf("사람이 이겼습니다.\n");
			human++;
		}
		else if (tmp == 2)
		{
			printf("비겼습니다 .\n");
			draw++;
		}

		printf("\n사람이 이긴 횟수 : %d, ", human);
		printf("컴퓨터가 이긴 횟수 : %d, 동점 : %d\n\n", computer, draw);
		printf("다시 게임을 하시겠습니까 ? ( y / n ) : ");
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
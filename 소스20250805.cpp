#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXENERGY 6
void printenergy(int my)
{
	printf("내 목숨 : ");
	for (int i = 0; i < my; i++)
		printf("■");
	for (int i = my; i < MAXENERGY; i++)
		printf("□");
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
			printf("게임 오버 ... 정답 : %s\n", Answer);
			break;
		}

		printf("단어 : ");
		for (int i = 0; i < len; i++)
			printf("%c", p[i]);
		printf("\n");

		if (strcmp(p, Answer) == 0)
		{
			printf("게임 승리! 정답 : %s\n", Answer);
			break;
		}

		printf("알파벳 입력 : ");
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
//		printf("컴퓨터 : 가위\n\n");
//		if (me == 0)
//			return 2;
//		else if (me == 1)
//			return 1;
//		else if (me == 2)
//			return 0;
//	}
//	else if (com == 1)
//	{
//		printf("컴퓨터 : 바위\n\n");
//		if (me == 0)
//			return 0;
//		else if (me == 1)
//			return 2;
//		else if (me == 2)
//			return 1;
//	}
//	else if (com == 2)
//	{
//		printf("컴퓨터 : 보\n\n");
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
//		printf("0 : 가위, 1 : 바위, 2 : 보\n당신이 낼 것은 ? : ");
//		scanf("%d", &me);
//		if (me == 0)
//			printf("당신 : 가위\n");
//		else if (me == 1)
//			printf("당신 : 바위\n");
//		else if (me == 2)
//			printf("당신 : 보\n");
//		else
//		{
//			printf("\n반칙 ! 다시 내 주세요 \n\n");
//			continue;
//		}
//		tmp = compare_victory(com, me);
//		if (tmp == 0)
//		{
//			printf("컴퓨터가 이겼습니다 .\n");
//			computer++;
//		}
//		else if (tmp == 1)
//		{
//			printf("사람이 이겼습니다.\n");
//			human++;
//		}
//		else if (tmp == 2)
//		{
//			printf("비겼습니다 .\n");
//			draw++;
//		}
//
//		printf("\n사람이 이긴 횟수 : %d, ", human);
//		printf("컴퓨터가 이긴 횟수 : %d, 동점 : %d\n\n", computer, draw);
//		printf("다시 게임을 하시겠습니까 ? ( y / n ) : ");
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

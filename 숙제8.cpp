#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXENERGY 7
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
	if (k == num + 1)
		imsi[size] = NULL;
	else
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
	int correct = 0;

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

	
	}

	free(Answer);
	return 0;
}

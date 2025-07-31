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

	return imsi;
	
}

int main()
{
	char* Answer = getAnswer();
	puts(Answer); 
	/*char num[4] = "___";
	char tmp[4];
	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;

	while (1)
	{
		printenergy(energy);
		if (!energy)
		{
			printf("게임 오버 ...\n");
			printf("정답 : %s", tmp);
			break;
		}
		printf("정답 : %s\n\n", num);

		if (atoi(num) == answer)
		{
			printf("게임 승리 !\n");
			break;
		}
		printf("숫자를 맞춰보세요 : ");
		scanf(" %c", &input);

		bool check = true;

		for (int i = 0; i < 3; i++)
		{
			if (tmp[i] == input)
			{
				num[i] = input;
				check = false;
			}
		}

		if (check)
			energy--;
	}*/
	free(Answer);
	return 0;
}


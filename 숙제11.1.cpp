#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int load(int buff[], int num)
{
	FILE* rfp = fopen("stack.txt", "r");
	if (rfp != NULL)
	{
		fscanf(rfp, "%d", &num);

		for (int i = 0; i < num; i++)
			fscanf(rfp, "%d", &buff[i]);
		fclose(rfp);
	}
	return num;
}
int save(int buff[], int num)
{
	FILE* wfp = fopen("stack.txt", "w");
	fprintf(wfp, "%d\n", num);
	for (int i = 0; i < num; i++)
		fprintf(wfp, "%d\n", buff[i]);
	fclose(wfp);
	return num;
}

int push(int buff[], int num)
{
	int value;

	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &value);
	buff[num++] = value;

	return num;
}
int pop(int buff[], int num)
{
	if (num > 0)
		printf("빠져 나온 값 : %d\n", buff[--num]);
	else
		printf("stack 이 비어있습니다 .\n");

	return num;
}
void print(int buff[], int num)
{
	printf("\n<stack 내부>\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d ", buff[i]);
	}
	printf("\n\n");
}
int main()
{
	int stack_buff[256];
	int top = 0, choice;
	bool while_flag = true;

	top = load(stack_buff, top);

	while (while_flag)
	{
		printf("[stack]\n1. push\n2. pop\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			top = push(stack_buff, top);
			break;
		case 2:
			top = pop(stack_buff, top);
			break;
		default:
			while_flag = false;
			break;
		}
		print(stack_buff, top);
		save(stack_buff, top);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int push(int stack_buff[],int top)
{
	int value;

	printf("stack�� ���� ���� �Է����ּ��� : ");
	scanf("%d", &value);
	stack_buff[top++] = value;

	return stack_buff[top];
}
int pop(int stack_buff[], int top)
{
	if (top > 0)
		printf("���� ���� �� : %d\n", stack_buff[--top]);
	else
		printf("stack �� ����ֽ��ϴ� .\n");
	return stack_buff[top];
}

int main()
{
	int stack_buff[256];
	int top = 0, choice;
	bool while_flag = true;

	while (while_flag)
	{
		printf("[stack]\n1. push\n2. pop\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			push(stack_buff, top);
			break;
		case 2:
			pop(stack_buff, top);
			break;
		default:
			while_flag = false;
			break;
		}
		printf("\n<stack ����>\n");
		for (int i = 0;i < top;i++)
		{
			printf("%d ", stack_buff[i]);
		}
		printf("\n\n");
	}
}
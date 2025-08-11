//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int stack_buff[256];
//	int top = 0, value, choice;
//	bool while_flag = true;
//
//	while (while_flag)
//	{
//		printf("[stack]\n1. push\n2. pop\n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			printf("stack에 넣을 값을 입력해주세요 : ");
//			scanf("%d", &value);
//			stack_buff[top++] = value;
//			break;
//		case 2:
//			if (top > 0)
//				printf("빠져 나온 값 : %d\n", stack_buff[--top]);
//			else
//				printf("stack 이 비어있습니다 .\n");
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		printf("\n<stack 내부>\n");
//		for (int i = 0;i < top;i++)
//		{
//			printf(" | %d ", stack_buff[i]);
//		}
//		printf("\n\n");
//	}
//}

#include <stdio.h>
#define MAXSIZE 10
#define _CRT_SECURE_NO_WARNINGS

int queue[MAXSIZE];
int front, rear;

void init_queue(void)
{
	front = rear = 0;
	printf("QUEUE SIZE is %d\n\n", MAXSIZE);
}
void clear_queue(void)
{
	front = rear;
}
int enqueue(int val)
{
	if ((rear + 1) % MAXSIZE == front)
	{
		printf("Queue Overflow, \n");
		return -1;
	}
	queue[rear] = val;
	rear = ++rear % MAXSIZE;
	return val;
}
int dequeue(void)
{
	int i;
	if (front == rear)
	{
		printf("Queue Overflow, \n");
		return -1;
	}
	i = queue[front];
	front = ++front % MAXSIZE;
	return i;
}
void print_queue(void)
{
	int i;
	printf("Queue From Front ----> To Rear \n");
	for (i = front;i != rear;i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n");
}
void main()
{
	int i;
	init_queue();
	printf(" \n push 5, 4, 7, 8, 2, 1\n");
	enqueue(5);
	enqueue(4);
	enqueue(7);
	enqueue(8);
	enqueue(2);
	enqueue(1);
	print_queue();

	printf("\n Pop");
	i = dequeue();
	print_queue();
	printf("  pop value is %d\n", i);

	printf(" \n push 3, 2, 5, 7");
	enqueue(3);
	enqueue(2);
	enqueue(5);
	enqueue(7);
	print_queue();

	printf("\n Now queue is full, push 3\n");
	enqueue(3);
	print_queue();

	printf(" \n Initialize Queue\n");
	clear_queue();
	print_queue();

	printf("\n Now queue is empty, pop\n");
	i = dequeue();
	print_queue();

	printf("pop value is %d\n", i);
}
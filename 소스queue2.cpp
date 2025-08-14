#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSIZE 10

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
		printf("Queue Underflow, \n");
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
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n\n");
}
void main()
{
	bool while_flag = true;
	init_queue();

	while (while_flag)
	{
		int choice;
		
		printf("[Queue]\n1. enqueue\n2. dequeue\n3. clear\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			int value;
			
			printf("Queue�� ���� ���� �Է����ּ��� : ");
			scanf("%d", &value);
			
			enqueue(value);
			break;
		case 2:
			int i;
			
			i = dequeue();
			if (i != -1)
				printf("���� ���� �� : %d\n", i);
			break;
		case 3:
			clear_queue();
			break;
		default:
			while_flag = false;
			break;
		}
		print_queue();
	}
	
	/*printf(" \npush 5, 4, 7, 8, 2, 1\n");
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
	printf(" pop value is %d\n", i);

	printf(" \npush 3, 2, 5, 7");
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

	printf("pop value is %d\n", i);*/

}
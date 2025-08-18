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
void save(void)
{
	FILE* wfp = fopen("queue.txt", "w");
		
	fprintf(wfp, "%d %d\n", front, rear);

		for (int i = front; i != rear; i = (i + 1) % MAXSIZE)
			fprintf(wfp, "%d\n", queue[i]);

		fclose(wfp);
}	
void load(void)
{
	FILE* rfp = fopen("queue.txt", "r");
	if (rfp != NULL) 
	{
		fscanf(rfp, "%d %d", &front, &rear);

		int idx = front;
		while (idx != rear && fscanf(rfp, "%d", &queue[idx]) == 1) 
			idx = (idx + 1) % MAXSIZE;
		fclose(rfp);
	}
}
void main()
{
	bool while_flag = true;
	init_queue();
	load();

	while (while_flag)
	{
		int choice;

		printf("[Queue]\n1. enqueue\n2. dequeue\n3. clear\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			int value;

			printf("Queue에 넣을 값을 입력해주세요 : ");
			scanf("%d", &value);

			enqueue(value);
			break;
		case 2:
			int i;

			i = dequeue();
			if (i != -1)
				printf("빠져 나온 값 : %d\n", i);
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
	save();
}
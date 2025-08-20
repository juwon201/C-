#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSIZE 10

class CQueue {
public:
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

		for (int i = front; i != rear; i = ++i % MAXSIZE)
			fprintf(wfp, "%d\n", queue[i]);

		fclose(wfp);
	}
	void load(void)
	{
		FILE* rfp = fopen("queue.txt", "r");
		if (rfp != NULL)
		{
			fscanf(rfp, "%d %d", &front, &rear);

			for (int i = front; i != rear; i = ++i % MAXSIZE)
				fscanf(rfp, "%d", &queue[i]);
			fclose(rfp);
		}
	}
};



void main()
{
	CQueue qu;
	
	bool while_flag = true;
	qu.init_queue();
	qu.load();

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

			qu.enqueue(value);
			break;
		case 2:
			int i;

			i = qu.dequeue();
			if (i != -1)
				printf("���� ���� �� : %d\n", i);
			break;
		case 3:
			qu.clear_queue();
			break;
		default:
			while_flag = false;
			break;
		}
		qu.print_queue();
	}
	qu.save();
}
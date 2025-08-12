//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define ERROR -1
//#define ROCK 1
//#define SCISSORS 0
//#define PAPER 2
//#define COM_WIN 3
//#define HUMAN_WIN 4
//#define DRAW 5
//
//int print_result(int what, const char* who)
//{
//	if (what == SCISSORS)
//		printf("%s : 가위\n", who);
//	else if (what == ROCK)
//		printf("%s : 바위\n", who);
//	else if (what == PAPER)
//		printf("%s : 보\n", who);
//	else
//		return ERROR;
//}
//int compare_victory(int com, int me)
//{
//	print_result(com, "컴퓨터");
//
//	if (me == com)
//		return DRAW;
//	else if (me - com == 1 || me - com == -2)
//		return HUMAN_WIN;
//	else 
//		return COM_WIN;
//}
//void main()
//{
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//
//	FILE* rfp; 
//	rfp = fopen("rsp.txt", "r");
//	if (rfp != NULL)
//	{
//		fscanf(rfp, "%d", &human);
//		fscanf(rfp, "%d", &computer);
//		fscanf(rfp, "%d", &draw);
//		fclose(rfp);
//	}
//
//	srand(time(NULL));
//	
//	while (true)
//	{
//		com = rand() % 3;
//		printf("0 : 가위, 1 : 바위, 2 : 보\n당신이 낼 것은 ? : ");
//		scanf("%d", &me);
//		if (print_result(me, "당신") == ERROR)
//		{
//			printf("다시 입력하시오 .\n\n");
//			continue;
//		}
//
//		tmp = compare_victory(com, me);
//		if (tmp == COM_WIN)
//		{
//			printf("컴퓨터가 이겼습니다 .\n");
//			computer++;
//		}
//		else if (tmp == HUMAN_WIN)
//		{
//			printf("사람이 이겼습니다.\n");
//			human++;
//		}
//		else if (tmp == DRAW)
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
//	FILE* wfp = fopen("rsp.txt", "w");
//	fprintf(wfp, "%d\n%d\n%d\n", human, computer, draw);
//	fclose(wfp);
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
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n");
}
void main()
{
	int i;
	init_queue();
	while(1)
	{
		printf(" \npush 5, 4, 7, 8, 2, 1\n");
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

		printf("pop value is %d\n", i);
	}
}
#include <stdio.h>	
#include <stdlib.h>
#include <time.h>
int throwDice()
{
	return rand() % 6 + 1;
}
void main()
{
	short int diceNum[10] = { 0, };
	int i=0;
	char dup = 'N';
	printf("** 주사위 2개 던지기 시작 **\n\n");
	srand((unsigned)time(NULL));

	int dice1, dice2;
	int equalCount = 0;
	
	while (1)
	{
		dice1 = throwDice();
		dice2 = throwDice();

		if (dice1 == dice2)
		{
			diceNum[i] = dice1;
			i++;
		}

		if (i == 10)
			break;

	}

	printf("같은 숫자가 나온 순서 => ");
	for (i = 0;i < 10;i++)
		printf("%d ", diceNum[i]);
	printf("\n\n");
}

//#include <stdio.h>
//void func1(int a);
//int main()
//{
//	func1(100);
//}
//void func1(int a)
//{
//	printf("%d \n", a);
//}
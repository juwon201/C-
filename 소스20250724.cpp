//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum = new int*[nRow];
//
//	for (int i = 0; i < nRow; i++)
//	{
//		aNum[i] = new int[nCol];
//		
//		for (int j = 0; j < nCol; ++j)
//		{
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//
//	for (int i = 0; i < nRow; ++i)
//	{
//		for (int j = 0; j < nCol; ++j)
//		{
//			printf("%02d ", aNum[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < nRow; ++i)
//		delete aNum[i];
//	delete aNum;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* arr;
//	arr = (int*)malloc(sizeof(int*) * 10);
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//}
//
//#define _CRT_SECURE_NO_WARNINGS//scanf�Լ� ��������
//#include <stdio.h>//printf, scanf�Լ� ��������
//#include <stdlib.h>//rand�Լ� �� malloc�Լ� ��������//srand�Լ� free�Լ� ���� ����
//#include <time.h>//time �Լ� ��������
//void func_sort(int* pNum, int N);//�ڿ� �ִ� �Լ� ����
//void func_swap(int& a, int& b);//�ڿ� �ִ� �Լ� ����
//int main()//main �Լ� ����
//{
//	int N; //���� ����
//	int* pNum;//�����ͺ��� ����
//	printf("���� �Է� : ");//"���� �Է�" �۱� ���
//	scanf("%d", &N);//���ڸ� �Է¹ް� �� ���� N�� ����
//
//	pNum = (int*)malloc(sizeof(int) * N);//pNum�� ����Ȱ���Ͽ� ũ�� ���
//
//	srand((unsigned int)time(NULL));//��� ��ȭ�ϴ� �ð��� �������� ������ ����(������ ����)
//
//	printf("<�������� �Է¹��� �� ���>\n");//�۱� ���
//	for (int i = 0; i < N; i++)//N�� �ݺ�
//	{
//		*(pNum + i) = (rand() % N) + 1;//������ �������� 1�� ���Ѱ�(1~N)������ ���� pNum�迭�� ���ʴ�� ����
//		printf("%2d", pNum[i]);//pNum �迭 ���
//	}
//	
//	func_sort(pNum, N);//���� �Լ� ����
//
//	printf("\n<������������ ���ĵ� �� ���>\n");//�۱� ���
//	for (int i = 0; i < N; i++)//N�� �ݺ�
//	{
//		printf("%2d", pNum[i]);//���ĵ� pNum �迭 ���
//		if (i % 10 == 9)//�������� 9�̸�
//			printf("\n");//�� �ǳʶٱ�
//	}
//	free(pNum);//�޸� ����
//}
//void func_sort(int* pNum, int N)//���� �Լ� ���� (�������� 1��)
//{
//	for (int i = 0; i < N; ++i)//N�� �ݺ� 
//	{
//		for (int j = i; j < N; ++j)//i���� N���� �ݺ�
//		{
//			if (pNum[i] > pNum[j])//�� ���ڰ� �޼��ں��� ũ��
//				func_swap(pNum[i], pNum[j]);//��ȯ �Լ� ����
//		}
//	}
//}
//void func_swap(int& a, int& b)//��ȯ �Լ� ����//��ȯ �Լ� �ܿ� �ִ� �������� ���� �����ϱ����� reference ���
//{
//	int temp = a;//temp�� a�� ����
//	a = b;//a�� b�� ����
//	b = temp;//b�� temp�� (���� a��) ����
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DATA {
	int N;
	int* pNum;
};
void func_sort(DATA* pNum, DATA N);
void func_swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	DATA data;
	printf("���� �Է� : ");
	scanf("%d", &data.N);

	data.pNum = (int*)malloc(sizeof(int) * data.N);
	srand((unsigned int)time(NULL));

	printf("<�������� �Է¹��� �� ���>\n");
	for (int i = 0; i < data.N; i++)
	{
		*(data.pNum + i) = (rand() % data.N) + 1;
		printf("%2d", data.pNum[i]);
	}

	func_sort(data.pNum, data.N);

	printf("\n<������������ ���ĵ� �� ���>\n");
	for (int i = 0; i < data.N; i++)
	{
		printf("%2d", data.pNum[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	free(data.pNum);
}
void func_sort(DATA *d)
{
	for (int i = 0; i < (*d).N; ++i)
	{
		for (int j = i; j < d->N; ++j)
		{
			if (d->pNum[i] > d->pNum[j])
				func_swap(d->pNum[i], d->pNum[j]);
		}
	}
}

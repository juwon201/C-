//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char parsing(char* string, int* data)
//{
//	char* p;
//	char oper;
//	oper = 0;
//	
//	p = strtok(string, " ");
//	data[0] = atoi(p);
//	p = strtok(NULL, " ");
//	oper = *p;
//	p = strtok(NULL, " ");
//	data[1] = atoi(p);
//	p = strtok(NULL, " ");
//	
//	p = strtok(NULL, " ");
//	data[2] = atoi(p);
//	
//	return oper;
//}
//
//int main()
//{
//	char String[20];
//	int data[3];
//	int result=0;
//	
//	printf("���ڿ� �Է� : ");
//	gets_s(String);
//
//	char oper = parsing(String, data);
//
//	switch (oper)
//	{
//	case '+': result = data[0] + data[1]; break;
//	case '-': result = data[0] - data[1]; break;
//	case '*': result = data[0] *data[1]; break;
//	case '/': result = data[0] / data[1]; break;
//	case '%': result = data[0] % data[1]; break;
//	default :
//		printf("�߸� �Է��Ͽ����ϴ�.\n"); break;
//	}
//
//	if (result == data[2])
//		printf("���Դϴ�.\n");
//	else 
//		printf("%d %c %d = %d�Դϴ� .\n", data[0], oper, data[1], result);	
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct GM {
	int no;
	char name[10];
	int part;
	int salary;
};
struct COMPANY {
	GM gms[5];
	int gmCount = 0;
};
COMPANY HireGM_once(COMPANY company)
{
	company.gms[company.gmCount].no = company.gmCount + 1;
	printf("�̸��� �Է����ּ��� .");
	scanf("%s",company.name);

	return company;
}
void main()
{
	printf("������ ����غ��� !\n\n");
	COMPANY gameCo;

	printf("���� GM���� ����ұ� ?\n");

	while (1)
	{
		gameCo = HireGM_once(gameCo);
		printf("�� ����ұ� ? (Y / N) : ");
		char ch;
		do {
			ch = getchar();
		} while (ch != 'Y' && ch != 'N');
		if (ch == 'N')
			break;
	}
	printf("GM %d���� �̾Ҵ� !\n", gameCo.gmCount);
}




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
//	printf("문자열 입력 : ");
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
//		printf("잘못 입력하였습니다.\n"); break;
//	}
//
//	if (result == data[2])
//		printf("참입니다.\n");
//	else 
//		printf("%d %c %d = %d입니다 .\n", data[0], oper, data[1], result);	
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
	printf("이름을 입력해주세요 .");
	scanf("%s",company.name);

	return company;
}
void main()
{
	printf("게임을 출시해보자 !\n\n");
	COMPANY gameCo;

	printf("먼저 GM부터 고용할까 ?\n");

	while (1)
	{
		gameCo = HireGM_once(gameCo);
		printf("더 고용할까 ? (Y / N) : ");
		char ch;
		do {
			ch = getchar();
		} while (ch != 'Y' && ch != 'N');
		if (ch == 'N')
			break;
	}
	printf("GM %d명을 뽑았다 !\n", gameCo.gmCount);
}




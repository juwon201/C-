#include <stdio.h>
#include "CStack.h"
void CStack::load()
{
	FILE* rfp = fopen("stack.txt", "r");
	if (rfp != NULL)
	{
		fscanf(rfp, "%d", &top);

		for (int i = 0; i < top; i++)
			fscanf(rfp, "%d", &stack_buff[i]);
		fclose(rfp);
	}
}
void CStack::load()
{
	FILE* wfp = fopen("stack.txt", "w");
	fprintf(wfp, "%d\n", top);
	for (int i = 0; i < top; i++)
		fprintf(wfp, "%d\n", stack_buff[i]);
	fclose(wfp);
}
void CStack::push()
{
	int value;
	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &value);
	stack_buff[top++] = value;
}
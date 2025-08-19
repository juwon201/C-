#pragma once
class CStack {
public://전체공개
	int stack_buff[256];
	int top;

	void load();
	void save();
	void push();
	
	void pop()
	{
		if (top > 0)
			printf("빠져 나온 값 : %d\n", stack_buff[--top]);
		else
			printf("stack 이 비어있습니다 .\n");
	}
	void print()
	{
		printf("\n<stack 내부>\n");
		for (int i = 0; i < top; i++)
		{
			printf("%d ", stack_buff[i]);
		}
		printf("\n\n");
	}

};
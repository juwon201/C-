#pragma once
class CStack {
public://��ü����
	int stack_buff[256];
	int top;

	void load();
	void save();
	void push();
	
	void pop()
	{
		if (top > 0)
			printf("���� ���� �� : %d\n", stack_buff[--top]);
		else
			printf("stack �� ����ֽ��ϴ� .\n");
	}
	void print()
	{
		printf("\n<stack ����>\n");
		for (int i = 0; i < top; i++)
		{
			printf("%d ", stack_buff[i]);
		}
		printf("\n\n");
	}

};
#pragma once

struct countstack
{
	int command;
	int constant;
};



//���������� ��������� �� ����� ������
unsigned CheckEOPage(unsigned* str);

//���������� ������� ������� �������
unsigned SizeUp(unsigned** str, unsigned size);

//���������� ������ ��� �������� �������������� ��������
int CountAddMemory(unsigned* StrCurrentAddress);

//������� ����� ��� ����� 
countstack CountContrAndConstStack(unsigned* StrCurrentAddress);

//������� ������������ �����
int CountExeStack(control* command_stack);



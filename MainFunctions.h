#pragma once

struct stack_t 
{
	control* command;
	ConstNumber* constant;
};


//������������� �������� ��� �������������
unsigned* InitEPage(int PageSize);

//������������� ����������� ������
stack_t recognize(unsigned* EPage);

//������� ��������
double calculate(stack_t stack, double x);
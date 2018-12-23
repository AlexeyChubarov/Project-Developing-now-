#pragma once

struct func2arg
{
	unsigned* description;
	double (*func)(double x,double y);
};

struct func1arg
{
	unsigned* description;
	double(*func)(double x);
};

//�������� ����� ����������
control* CommandStackCreator(unsigned* StrCurrentAddress,int size);

//�������� ����� ��������
ConstNumber* ConstantStackCreator(unsigned* StrCurrentAddress,int size);

//������� ��������
double Counter(ConstNumber* constant_stack, control* command_stack, double x);

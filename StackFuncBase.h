#pragma once

struct control
{
	unsigned* pointer;
	int descriptor;
};

struct ConstNumber
{
	double constant;
	int position;
};

struct count
{
	double number;
	int position;
};

//����� ������� � ���� ����������
void PushToCommand(control* StackBasePoint, control element);

//����� ������� � ���� ��������
void PushToConstant(ConstNumber* StackBasePoint, ConstNumber element);

//����� ������� � ����������� ����
void PushToStack(count* StackBasePoint, count element);

//�������� ������� �� ������������ �����
double PopFromStack(count* StackBasePoint);

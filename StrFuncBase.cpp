#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

#include "InternalDefines.h"
#include "StrFuncBase.h"

//������� ��������� ������� �� �������� ������
void readln(unsigned* StrCurrentAddress)
{
	unsigned i = 0;

	while (true)
	{
		*((char*)StrCurrentAddress + i) = getchar();
		if ((i==PageSize/4) or (*((char*)StrCurrentAddress + i) == 10)) break;
		inc(i);
	}
	return;
}

//������� ��������� ����������� ���������� ��������
void read(unsigned* StrCurrentAddress, unsigned quantity)
{
	if (quantity == 0)return;

	unsigned i = 0;
	
	while (true)
	{
		*((char*)StrCurrentAddress + i) = getchar();
		if ((i == PageSize / 4) or (i==quantity-1)) break;
		inc(i);
	}
	return;
}

//������� ������� ������� �� �������� ������
void writeln(unsigned* StrCurrentAddress)
{
	unsigned i = 0;
	while (true)
	{
		putchar(*((char*)StrCurrentAddress + i));
		if ((i == PageSize / 4) or (*((char*)StrCurrentAddress + i + 1) == 10))break;
		inc(i);
	}
	return;
}

//������� ������� ����������� ���������� �������� ������
void write(unsigned* StrCurrentAddress, unsigned quantity)
{
	if (quantity == 0)return;
	unsigned i = 0;
	while (true)
	{
		putchar(*((char*)StrCurrentAddress + i));
		if ((i == PageSize / 4) or (i==quantity)) break;
		inc(i);
	}
	return;
}

//����� ������ ������
void shift(unsigned* StartPoint, unsigned step)
{
	unsigned ShiftStep=0;


	while (true)
	{
		if (*((char*)StartPoint-1 + ShiftStep) == 10) break;
		inc(ShiftStep);
	}
	
	for (;;ShiftStep--)
	{
		if (ShiftStep == 0)break;
		*((char*)StartPoint-1 + ShiftStep + step) = *((char*)StartPoint-1 + ShiftStep);
		*((char*)StartPoint-1 + ShiftStep)=' ';
	}

	return;
}

//����� ������ ����� (�������� ��������)
void del(unsigned* StartPoint, unsigned step)
{
	unsigned ShiftStep = 0;
	
	while (true)
		{
			if (*((char*)StartPoint - 1 + ShiftStep) == 10) break;
			inc(ShiftStep);
		}
	for (unsigned i=0;i<=ShiftStep; i++)
	{
		*((char*)StartPoint - 1+i) = *((char*)StartPoint - 1 + step+i);
	}
	return;
}
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

#include "InternalDefines.h"
#include "StrFuncBase.h"
#include "FunctionBase.h"
#include "formater.h"
#include "FuncForRec.h"

void FinalRepalce(unsigned* StrCurrentAddress,double number,int accurancy)
{
	unsigned i = 0;
	char buf[25];
	unsigned res;

	res = sprintf_s(buf, "%.*lf",accurancy, number);
	while (true)
	{
		if (*((char*)StrCurrentAddress + i) == 10)return;

		if ((*((char*)StrCurrentAddress + i) == '(')and (*((char*)StrCurrentAddress + i + 1) == ','))
			add((unsigned*)((char*)StrCurrentAddress + i+1),"0",sizeof("0")-1);

		if ( 
			(*((char*)StrCurrentAddress + i) == 'x') 
			and
			(((*((char*)StrCurrentAddress + i-1) == '(') and (*((char*)StrCurrentAddress + i + 1) == ','))
				or((*((char*)StrCurrentAddress + i - 1) == ',') and (*((char*)StrCurrentAddress + i + 1) == ')'))
			    or ((*((char*)StrCurrentAddress + i - 1) == '(') and (*((char*)StrCurrentAddress + i + 1) == ')')))
			)

		{
			replace((unsigned*)((char*)StrCurrentAddress + i), 1, buf, res);
		}
		if (
			(*((char*)StrCurrentAddress + i) == 'e')
			and
			(((*((char*)StrCurrentAddress + i - 1) == '(') and (*((char*)StrCurrentAddress + i + 1) == ','))
				or ((*((char*)StrCurrentAddress + i - 1) == ',') and (*((char*)StrCurrentAddress + i + 1) == ')'))
				or ((*((char*)StrCurrentAddress + i - 1) == '(') and (*((char*)StrCurrentAddress + i + 1) == ')')))
			)
		{
			res= sprintf_s(buf, "%.*lf",accurancy,2.718281828459045);

			replace((unsigned*)((char*)StrCurrentAddress + i), 1, buf, res);

			res = sprintf_s(buf, "%.*lf",accurancy, number);
		}

		inc(i);
	}
}

//������� ��������
double counter(unsigned* StrCurrentAddress)
{
	char buf[256];
	int i = 0;
	double result=0.;

	while (true)
	{
		if (*(char*)StrCurrentAddress + i == 10)return result;

		buf[i] = *((char*)StrCurrentAddress + i);

		if (buf[i] == '(')counter((unsigned*)((char*)StrCurrentAddress + i + 1));



		inc(i);
	}

}
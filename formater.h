#pragma once

//����������� ��������� � �������
unsigned* StrFormatMD(unsigned* StrCurrentAddress);

//������������� �������� � ���������
unsigned* StrFormatPM(unsigned* StrCurrentAddress);

//������������� ������������� � ��������� �������
unsigned* StrFormatC(unsigned* StrCurrentAddress);

//������������� ������������ ���� �����
void StdTypeOfNumberRecognize(unsigned** StrCurrentAddress, int* SizeOfPage);

//������� �������� � ����������� ������
int PostfixTransfer(unsigned** StrCurrentAddress, int*PageSize,unsigned accurancy);
#pragma once

//������� ��������� ������� �� �������� ������
void readln(unsigned** StrCurrentAddress,int* SizeOfPage);

//������� ��������� ������� �� �������� ������ �� �����
void freadln(FILE* file, unsigned** StrCurrentAddress,int* SizeOfPage);

//������� ��������� ����������� ���������� ��������
void read(unsigned* StrCurrentAddress, unsigned quantity);

//������� ������� ������� �� �������� ������
void writeln(unsigned* StrCurrentAddress);

//������� ������� ������� �� �������� ������ � ����
void fwriteln(FILE* file, unsigned* StrCurrentAddress);

//������� ������� ����������� ���������� �������� ������
void write(unsigned* StrCurrentAddress, unsigned quantity);

//����� ������ ������
void shift(unsigned* StartPoint, unsigned step);

//����� ������ ����� (�������� ��������)
void del(unsigned* StartPoint, unsigned step);

//���������� � ������
unsigned * add(unsigned* StartPoint, const char *Element,unsigned length);

//������ �������� � ������
unsigned * replace(unsigned * StartPoint, unsigned symbols, const char* Element, unsigned length);

//����� �������� � ������
unsigned BinaryWrite(unsigned* EPage);

#pragma once

//������� ��������� ������� �� �������� ������
unsigned* readln(unsigned* StrCurrentAddress);

//������� ��������� ����������� ���������� ��������
void read(unsigned* StrCurrentAddress, unsigned quantity);

//������� ������� ������� �� �������� ������
void writeln(unsigned* StrCurrentAddress);

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

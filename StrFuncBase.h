#pragma once

//������� ��������� ������� �� �������� ������
void readln(unsigned* StrCurrentAddress);

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

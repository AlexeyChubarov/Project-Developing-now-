#pragma once

//������� ��������� �� ������� �������� � ����������
double dIntegral(ConstNumber* constant_stack, control* command_stack, double from, double to, double step);

//������� ��������� �� ������� �� ���������
double dIntegral(double(*func)(double x), double from, double to, double step);
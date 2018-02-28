#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include "Header.h"
using namespace std;


void main()
{	
	setlocale(LC_ALL, "rus");
	int task;
	do
	{
		task = TaskNumber();
		switch (task)
		{
			case 1:
			{
				/*�������� �������� ��������� �� C, ������� ��������� � ��������������(������ ������������� ��� ��������) double, int � char.
					����� �������� � ��������������� ��������� �� ������ �� ��� ����������.����� ���� ��������� ������ ����������� 
					����� � �������� ����������� � ������ � ������ ������(� ������) ������ �� ����� ����������.

					����������� ������������ �������������� �0x% x� ��� ������ ������� � ����������������� �������.
					�� ������ ������ ������, ������� �������� �������� ��� : �0xbfe55918�.
					��������� ������� �0x� ������� ���, ��� ������������ ����������������� �������; ������� ���� ������ �����.

					����������� �������� sizeof ��� ����������� ������� ������, ���������� ��� ������� ����������.*/
				int type = TypeNumbReturn();
				switch (type)
				{
					case 1:
					{
						double var1 = 15.0, var2 = 15.0, var3 = 15.0;
						double * pointerVar1 = &var1, *pointerVar2 = &var2, *pointerVar3 = &var3;
						printf("var1 = %f, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var1, &var1, pointerVar1, sizeof(var1), sizeof(pointerVar1));
						printf("var2 = %f, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var2, &var2, pointerVar2, sizeof(var2), sizeof(pointerVar2));
						printf("var3 = %f, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var3, &var3, pointerVar3, sizeof(var3), sizeof(pointerVar3));
					}break;

					case 2:
					{
						int var1 = 15, var2 = 15, var3 = 15;
						int * pointerVar1 = &var1, *pointerVar2 = &var2, *pointerVar3 = &var3;
						printf("var1 = %d, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var1, &var1, pointerVar1, sizeof(var1), sizeof(pointerVar1));
						printf("var2 = %d, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var2, &var2, pointerVar2, sizeof(var2), sizeof(pointerVar2));
						printf("var3 = %d, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var3, &var3, pointerVar3, sizeof(var3), sizeof(pointerVar3));
					} break;

					case 3:
					{
						char var1 = 'H', var2 = 'E', var3 = 'Y';
						char * pointerVar1 = &var1, *pointerVar2 = &var2, *pointerVar3 = &var3;
						printf("var1 = %d, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var1, &var1, pointerVar1, sizeof(var1), sizeof(pointerVar1));
						printf("var2 = %d, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var2, &var2, pointerVar2, sizeof(var2), sizeof(pointerVar2));
						printf("var3 = %d, add = 0x%x, pointadr = %p, sizeofvar1 = %d, sizeofpoint = %d\n", var3, &var3, pointerVar3, sizeof(var3), sizeof(pointerVar3));
					} break;
				}
			} break;

			case 2:
			{
				//�������� ��������� �� C, ����� ���������, ����� �� Number ���� ������� ��� ����� ���� ������� �����
				srand(time(NULL));
				int n = 1 + rand() % 500;
				if (NumbCheck(&n) == 1)
					cout << "��, ����� " << n << " ����� ���� �������� ��� ����� ���� ������� �����" << endl;
				else
					cout << "���, ����� " << n << " �� ����� ���� �������� ��� ����� ���� ������� �����" << endl;
			} break;

			case 3:
			{
				//�������� ��������� � C, ����� ������������� ���������� ����� � �����������������.
				srand(time(NULL));
				int n = 16 + rand() % 500, max = 16;
				cout << n << endl;
				From10To16(n);
				/*for (int j = 16; j <= n; j += 16)
				{
					if (j > max)
						max = j;
				}*/
				cout << "max = " << max << endl;
			} break;

			case 6:
			{
				/*�������� ��������� c ��� ����� n �����, ����������� �� ����� � ���������� �����, �� �������� �� � �������.*/
				int numb = NumbQuantity(), sum = 0, max = 0;
				//SumAndMax(&numb);
				SumAndMax(&numb, &sum, &max);
				cout << "����� ����� = " << sum << "\n���������� ����� - " << max << endl;

			} break;
		}
	} while (task > 0);

	system("pause");
}
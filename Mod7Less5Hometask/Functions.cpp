#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include "Header.h"
using namespace std;

int TaskNumber()
{	
	int task;
	cout << "Введите номер заданя - ";
	cin >> task;
	return task;
}

int TypeNumbReturn()
{
	int type;
	do
	{
		cout << "Введите тип переменной где 1 - double, 2 - int, 3 - char:  ";
		cin >> type;
	} while (type < 1 || type > 3);
	return type;
}

bool NumbCheck(int *n)
{
	for (int i = 1; i <= *n; i++)
		for (int j = 1; j <= *n; j++)
			if (i + j == *n)
				return 1;
	return 0;
}

int From10To16(int n)
{
	int q = 0, size = 0, m[50], i = 0, max = 16;
	
	if (n > 16)
	{
		while (n > 16)
		{
			for (int j = 16; j <= n; j += 16)
			{
				if (j > max)
					max = j;
			}
			q = n - max;
			m[i] = q;
			n = max;
			i++;
		}
		for (int i = size; i >= 0; i--)
		{
			cout << m[i] << endl;
		}
	}
	

	return 1;
}

int NumbQuantity()
{
	setlocale(LC_ALL, "Rus");
	int numb;
	do
	{
		cout << "Введите кол-во чисел в пределах 10 - ";
		cin >> numb;
	} while (numb <1 || numb > 10);
	return numb;
}

void SumAndMax(int *numb)
{	
	setlocale(LC_ALL, "Rus");
	int sum = 0, n = 0, count = 0, max = 0;
	while (count < *numb)
	{	
		cout << "Введите любое число - ";
		cin >> n;
		sum += n;
		if (count == 0)
			max = n;
		if (count > 0)
			if (n > max)
				max = n;
		count++;
	}
	cout << "Сумма чисел = " << sum << "\nНаибольшее число - " << max << endl;
}

void SumAndMax(int *numb, int *sum, int*max)
{
	setlocale(LC_ALL, "Rus");
	int count = 0, n = 0;
	while (count < *numb)
	{
		cout << "Введите любое число - ";
		cin >> n;
		*sum += n;
		if (count == 0)
			*max = n;
		if (count > 0)
			if (n > *max)
				*max = n;
		count++;
	}
}
// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Вычисление интеграла методом трапеций. 

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include "IntegralHeader.h"


int main()
{
	int i;
	double a[5], b[5], delta[5];
	double F1[5], F2[5], F3[5];

	for (i = 0; i <= 4; i++)
	{
		printf("please, enter the limits of integration:\t");
		scanf_s("%lf %lf", &a[i], &b[i]);
		getchar();

		printf("please, enter the integration accuracy: \t");
		scanf_s("%lf", &delta[i]);
		getchar();
	}

	printf("computing, please, be patient :))\n");

	for (i = 0; i <= 4; i++)
		F1[i] = dIntegral(SinPlusCos, a[i], b[i], delta[i]);

	for (i = 0; i <= 4; i++)
		F2[i] = dIntegral(SinDivideId, a[i], b[i], delta[i]);
	
	for (i = 0; i <= 4; i++)
		F3[i] = dIntegral(SecMultiplyId, a[i], b[i], delta[i]);

	printf("Your results: \n");
	for (i = 0; i <= 4; i++)
		printf("f(x)=sin(x)+cos(x) on [%lf;%lf] equal % +12lf\n", a[i], b[i], F1[i]);

	for (i = 0; i <= 4; i++)
		printf("f(x)=sin(x)/x      on [%lf;%lf] equal % +12lf\n", a[i], b[i], F2[i]);

	for (i = 0; i <= 4; i++)
		printf("f(x)=sec(x)*x      on [%lf;%lf] equal % +12lf\n", a[i], b[i], F3[i]);
		

	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

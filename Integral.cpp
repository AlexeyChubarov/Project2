#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <limits.h>

double dIntegral(double(*func)(double x), double from, double to, double step)
{
	int n, id_sign;
	double integral_summ, change;

	integral_summ = 0.;
	if ((abs(to - from) / step) > INT_MAX)
	{
		return NAN;
	}


	if (from > to)
	{
		id_sign = -1;
		change = to;
		to = from;
		from = change;
	}
	else id_sign = 1;

	n = (int)(abs(to - from) / step);

	for (int i = 1; i < n; i++)
	{
		integral_summ += (*func)(from + i * step);
	}
	integral_summ = id_sign * (integral_summ + ((*func)(from) + (*func)(to)) / 2.)*step;
	return integral_summ;
}
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <limits.h>

double SinPlusCos(double x)
{
	return sin(x) + cos(x);
}

double SinDivideId(double x)
{
	return sin(x) / x;
}

double SecMultiplyId(double x)
{
	return x / cos(x);
}
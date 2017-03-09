#include "Series.h"

Series::Series(long n)
{
	this->n=n;
}

long Series::fibonacciIt()
{
	if (this->n < 2)
		return this->n;
	long a=0;
	long b=1;
	long c=0;
	for (int i = 2; i <= this->n; ++i)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

long Series::fibonacciRec(long n)
{
	if (n < 2)
		return n;
	return fibonacciRec(n-1)+fibonacciRec(n-2);

}

long Series::factorialIt()
{
	if (this->n < 2)
		return 1;
	long a=1;
	for (int i = 2; i <= this->n ; ++i)
		a*=i;
	return a;
}

long Series::factorialRec(long n)
{
	if(n<2)
		return 1;
	return factorialRec(n-1)*n;
}

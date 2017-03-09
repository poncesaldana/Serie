#include "Series.h"

int main()
{
	long n;
	print ("Ingrese un numero");
	scaf("%d"&n);
	printf( El numero que ingreso es %d);



	Series s(n);
	std::cout<<s.fibonacciIt()<<std::endl;
	std::cout<<s.fibonacciRec(n)<<std::endl;
	std::cout<<s.factorialIt()<<std::endl;
	std::cout<<s.factorialRec(n)<<std::endl;

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumTwo(int a, int b)
{	
	return (a+b);
}


int square(int n)
{
	return (n*n);
}


int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	} 
	else
	{
		return y;
	} 
}


int main(int argc, char *argv[])
 {
 	int result_sum, result_square, result_get_max;
 	
 	result_sum = sumTwo(5,7);
 	printf("%i \n", result_sum);
 	
 	result_square = square(5);
 	printf("%i \n", result_square);
 	
 	result_get_max = get_max(5,9);
 	printf("%i \n", result_get_max);
 	
 	return 0;
 }
 


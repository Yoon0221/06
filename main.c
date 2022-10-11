#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination()
{
	int num1, num2, num3;
	
	int ans_n;
	int ans_r;
	int ans_n_r;
	int ans_final;
	
	
	num1 = get_integer();
	ans_n = factorial(num1);
	 
	num2 = get_integer();
	ans_r = factorial(num2);
	
	ans_n_r = factorial(num1-num2);
	
	ans_final = ans_n / (ans_n_r * ans_r);
	
	
	//확인. 
	printf("%d, %d, %d \n", ans_n, ans_r, ans_n_r); 

	return ans_final;
}

int factorial(int num)
{
	int i;
	int res = 1;
	
	for (i = 1; i <= num; i++)
	{
		res = res * i;
	}
	
	return res;
}


int get_integer()
{
	int x;
	
	printf("값을 입력하세요. : ");
	scanf("%d", &x);
	
	return x;
}

int main(int argc, char *argv[])
 {
 	int answer;
 	
 	answer = combination();
 	printf("%d", answer);
 	
 	return 0;
 }
 


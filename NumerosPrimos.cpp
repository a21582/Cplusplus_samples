// NumerosPrimos.cpp : This file contains the 'main' function. Program execution begins and ends there.

//#include <iostream>
#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>

static bool IsPrime(int TestNumber)
{
	if (TestNumber == 1) return false;
	if (TestNumber == 2) return true;
	if ((TestNumber % 2) == 0 )
	{
		return false;
	}
	//int middle = TestNumber / 2;
	for (int i = 2; i < TestNumber; i++)
	{
		if ((TestNumber % i) == 0)
		{
			return false; //int 0
		}
	}
	return true; //int 1
}

int main(int argc, char** argv)
{
	int N;
	printf("Calculo de intervalo de primos\n");
	fflush(stdout);
	scanf_s("%d", &N);
	printf("Intervalo de 1..%d \n", N);
	int counterPrimes = 0;
	for (int i = 1; i < N; i++)
	{
		if (IsPrime(i))
		{
			printf("%d Is Prime!\n", i);
			counterPrimes++;
		}
		else
		{
			printf("%d Is NOT Prime!\n", i);
		}
	}
	printf("%d Prime(s) found!\n", counterPrimes);
	_getch();
	return 0;
}




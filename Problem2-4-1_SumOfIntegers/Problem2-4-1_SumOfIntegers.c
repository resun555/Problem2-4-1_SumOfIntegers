// Problem2-4-1_SumOfIntegers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	int a[100];
	for (size_t i = 0; i < 100; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for (size_t i = 0; i < 100; i++)
	{
		sum += a[i];
	}
	printf("%d", sum);
    return 0;
}


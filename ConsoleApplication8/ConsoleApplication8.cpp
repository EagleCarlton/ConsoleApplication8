// ConsoleApplication8.cpp : �������̨Ӧ�ó������ڵ㡣
//��������

#include "stdafx.h"
#include "stdio.h"
int binary_search(const int p[], int n, int key);
int main()
{
	int a[10], i;
	printf("input 10 integers in ascending:\n");
	for (i = 0; i < 10; ++i)
		scanf_s("%d", &a[i]);
	printf("%d\n", binary_search(a, 10, 5));
    return 0;
}
int binary_search(const int p[], int n, int key)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key == p[mid])
			break;
		else
			if (key < p[mid])
				right = mid - 1;
			else
				left = mid + 1;
	}
	return left <= right ? mid : -1;
}


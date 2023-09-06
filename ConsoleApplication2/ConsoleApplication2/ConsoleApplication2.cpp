#include "stdafx.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];
	int n = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < n; i++)
	{

		a[i] = rand();

	}
	//-+
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	
	}
	//+-
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}


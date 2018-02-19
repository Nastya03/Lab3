#include "stdafx.h"
#include <time.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	double maxVal=0, buff=0;
	int arr[3][5], indx;
	for (int i = 0; i < 3; i++) 
	{
		printf("\n");
		for (int j = 0; j < 5; j++) 
		{
			arr[i][j] = rand() % 5;
			printf("%3d", arr[i][j]);
			
		}
	}

	for (int i = 0; i < 3; i++) 
	{
		buff = 0;
		for (int j = 0; j < 2; j++) 
		{
			buff += pow(arr[i][j], 2);
		}
		if (buff>maxVal) 
		{
			maxVal = buff;
			indx = i;
		}
	}
	printf("\n\nMax: %d", indx);
	printf("\n");
	return 0;
}
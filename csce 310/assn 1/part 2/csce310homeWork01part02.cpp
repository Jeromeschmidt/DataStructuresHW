#include "csce310homeWork01part02.h"
#include <iostream>

using namespace std;

void printPrimes( unsigned short int num )
{
	//cout << num << endl;
	int i;
	int j;
	int flag = 0;
	for(int i = 2; i <= num; i++)
	{
		for(int j = 2; j <= i/2; j++)
		{
			if((i%j) == 0)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			cout << i << endl;
		}
		
		flag = 0;
	}
	
	return;
}
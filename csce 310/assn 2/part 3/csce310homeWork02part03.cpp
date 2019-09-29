#include <vector>
#include "csce310homeWork02part03.h"
#include <cmath>
#include <iostream>

using namespace std;

bool sumToN( vector<int> number , int value )
{
	for(int i = 0; i < number.size(); i++)
	{
		for(int j = 0; j < number.size(); j++)
		{
			if((value-(number[i]+number[j])) == 0)
			{
				return true;
			}
		}
	}
	return false;
}
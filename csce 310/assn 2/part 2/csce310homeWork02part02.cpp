#include <vector>
#include "csce310homeWork02part02.h"
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int overlappingIntervals( vector<int> start , vector<int> end )
{
	int count = 0;
	int max = 0;
	int point = start[0];
	int maxPoint = 0;
	
	for(int i = 0; i < end.size();i++)
	{
		if(end[i] > maxPoint)
		{
			maxPoint = end[i];
		}
	}

	for(int i = 0; point < maxPoint; i++)
	{
		point = point + 1;
		count = 0;
		for(int j = 0; j < end.size(); j++)
		{
			if((point >= start[j]) && (point <= end[j]))
			{
				count++;
			}
		}

		if(count > max)
		{
			max = count;
		}
	}
	
	return max;
}

#include "csce310homeWork02part01.h"

#include <vector>

using namespace std;

vector<int> placeNumbers( vector<int> nums , vector<char> signs )
{
	int temp;
	
	for(int j = 0; j < 5; j++)
	{
		for(int i = 0; i < signs.size(); i++)
			{
				if((signs[i] == '<') && (nums[i] > nums[i+1]))
				{
					temp = nums[i];
					nums[i] = nums[i+1];
					nums[i+1] = temp;
				}
				if((signs[i] == '>') && (nums[i] < nums[i+1]))
				{
					temp = nums[i];
					nums[i] = nums[i+1];
					nums[i+1] = temp;
				}
			}
	}
	
	return nums;
}
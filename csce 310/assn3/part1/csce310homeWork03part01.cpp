#include <vector>
#include "csce310homeWork03part01.h"
#include <cmath>
#include <iostream>

using namespace std;

int minimumST( vector< vector<int> > adjacencyMatrix )
{
	bool VT[adjacencyMatrix.size()];
	for(int k = 0; k < adjacencyMatrix.size(); k++)
	{
		VT[k] = false;
	}
	VT[0] = true;
	int result = 0;
	int temp;
	
	for(int i = 0; i < adjacencyMatrix.size(); i++)
	{
		if(adjacencyMatrix[i][0] > 0)
		{
			temp = adjacencyMatrix[i][0];
		}
		else
		{
			temp = adjacencyMatrix[i+1][0];
		}
		for(int j = 0; j < adjacencyMatrix[i].size(); j++)
		{
			if((adjacencyMatrix[i][j] < temp) && (adjacencyMatrix[i][j] > 0))
			{
				temp = adjacencyMatrix[i][j];
			}
		}
		result = result + temp;
	}
	cout << "value: " << adjacencyMatrix.size() << "\n";
	return result;
}
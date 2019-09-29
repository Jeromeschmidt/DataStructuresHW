#include <vector>
#include "csce310homeWork03part03.h"
#include <cmath>
#include <iostream>

using namespace std;

vector< vector<double> > allPairsSP( vector< vector<double> > adjacencyMatrix , int i )
{
	int dist[V][V], i, j, k;

		vector<vector<int>>::iterator v = graph.begin();
		i = 0;
		while( v != graph.end()) {
	cout << "Hello";
	vector<int>::iterator iv = v->begin();
	j=0;
	while(iv!=v->end()){
	dist[i][j] = *iv;
	iv++;
	j++;
	cout << "value of v = " << *iv << endl;
	}
	i++;
	v++;
	}
		for (k = 0; k < n; k++)
		{
			 for (i = 0; i < V; i++)
			 {
				  for (j = 0; j < V; j++)
				  {
						if (dist[i][k] + dist[k][j] < dist[i][j])
							 dist[i][j] = dist[i][k] + dist[k][j];
				  }
			 }
		}
		printMatrix(dist);
	}

	void printMatrix(int dist[][V])
	{
		for (int i = 0; i < V; i++)
		{
			 for (int j = 0; j < V; j++)
			 {
				  if (dist[i][j] == INF)
						printf("%7s", "-1");
				  else
						printf ("%7d", dist[i][j]);
			 }
			 printf("\n");
		}
}
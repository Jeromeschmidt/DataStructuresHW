# include "csce310homeWork04part01.h"
# include <vector>
# include <iostream>

using namespace std ;

int collectWithLoss ( vector< vector < int > > grid )
{
   int matrix [grid.size()][ grid[0].size() ];

  for ( int i = 0; i < grid.size() ; i ++)
  {
    for ( int j = 0; j < grid[0].size() ; j ++)
    {
      matrix[i][j] = 0;
    }
  }

  for ( int i = 0; i < grid.size() ; i ++)
  {
    for ( int j = 0; j < grid[0].size() ; j ++)
    {
      if ((( i == 0) && ( j == 0) ) )
      {
        matrix[i][j] = grid[i][j];
      }
      else if (( i == 0) && ( j != 0) )
      {
        matrix[i][j] = grid[0][j] + matrix[0][j -1];
      }
      else if (( i != 0) && ( j == 0) )
      {
        matrix[i][j] = grid[i][0] + matrix[i-1][0];
      }
      else
      {
        matrix [i][j] = grid[i][j] + max(matrix[i-1][j] , matrix[i][j-1]) ;
      }
      if ( grid[i][j] == -1)
      {
        matrix[i][j] = 0;
      }
    }
  }
return matrix[grid.size()-1][grid[0].size()-1];
}
#include "csce310homeWork04part01.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main( int argc , char* argv[] ){
  vector<int> numbers;
  int rows;
  int cols;
  cin >> rows;
  cin >> cols;
  vector<int> row(cols,0);
  vector< vector<int> > grid(rows,row);
  
  int val;
  for( int r = 0; r < rows; r++ ){
    for( int c = 0; c < cols; c++ ){
      cin >> grid[r][c];
    }
  }
  
  try{
    fprintf( stdout , "The most that can be collected is %d\n" , collectWithLoss( grid ) );
  }
  catch( exception e ){
    cerr << "ERROR" << endl;
  }
}

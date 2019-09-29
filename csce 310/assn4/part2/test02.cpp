#include "csce310homeWork04part02.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main( int argc , char* argv[] ){
  unsigned long long int n;
  cin >> n;
  try{
    fprintf( stdout , "Lucas number %llu has a value of %llu\n" , n , lucasNumber( n ) );
  }
  catch( exception e ){
    cerr << "ERROR" << endl;
  }
}

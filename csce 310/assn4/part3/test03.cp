#include "csce310homeWork04part03.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main( int argc , char* argv[] ){
  int principal;
  int interest;
  int years;

  cin >> principal;
  cin >> interest;
  cin >> years;
  
  try{
    fprintf( stdout , "The loan is for $%d at %.2f%% for %d years. The first payment will be $%.2f\n" , principal , interest * 1.0 / 100.0 , years , payLoan( principal , interest / 10000.0 , years ) );
  }
  catch( exception e ){
    cerr << "ERROR" << endl;
  }
}

#include "csce310homeWork04part02.h"

using namespace std;

unsigned long long int lucasNumber( unsigned long long int n )
{
  if(n == 0)
  {
    return 2;
  }
  if(n == 1)
  {
    return 1;
  }
  
  return lucasNumber(n-1)+lucasNumber(n-2);
}

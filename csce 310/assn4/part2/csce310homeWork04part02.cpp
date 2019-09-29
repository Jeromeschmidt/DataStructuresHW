#include "csce310homeWork04part02.h"

using namespace std;

unsigned long long int lucasNumber( unsigned long long int n )
{
  long long int first = 2;
  long long int second = 1;
  long long int temp;
  
  if(n == 0)
  {
    return 2;
  }
  
  if(n == 1)
  {
    return 1;
  }
  
  for(int i = 2; i <= n; i++)
  {
    temp = first + second;
    first = second;
    second = temp;
  }
  return second;
}

/*
if(n == 0)
{
  return 2;
}
if(n == 1)
{
  return 1;
}

return lucasNumber(n-1)+lucasNumber(n-2);
*/
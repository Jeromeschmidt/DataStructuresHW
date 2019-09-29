#include "csce310homeWork01part01.h"
#include <math.h>
#include <string>

using namespace std;

unsigned long long int fromBaseFive( string number ){
	unsigned long long int num = 0;
	
	for(int i = 0; i < number.length(); i++)
	{
		num = num + (((number.at((number.length()-1)-i)-'0') * pow(5, i)));
	}
	
	return num;
}
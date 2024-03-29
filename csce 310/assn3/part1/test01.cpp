#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "csce310homeWork03part01.h"
using namespace std;

int main(int argc , char* argv[]){
	
	ifstream matrixFile( argv[1] );
	istream_iterator<int> mStart(matrixFile),mEnd;
	vector<int> matrixArray(mStart,mEnd);

	int dimensions = (int)(sqrt( matrixArray.size() ));
	vector<int> row(dimensions,0);
	vector< vector<int> > matrix(dimensions,row);

	for( int i = 0; i < dimensions; i++ ){
		for( int j = 0; j < dimensions; j++ ){
			matrix[j][i] = matrixArray[j*dimensions+i];
		}
	}

	try{
		cout << "The minimum spanning tree value: " << minimumST( matrix );
		cout << endl;
	}
	catch( int e ){
		cerr << "An error occurred" << endl;
	}
	return 0;
}
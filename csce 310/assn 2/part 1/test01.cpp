#include "csce310homeWork02part01.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main( int argc , char* argv[] ){
	vector<int> numbers;
	vector<char> signs;
	int num;
	string sgns;

	getline( cin , sgns );
	
	while( cin >> num ){
		numbers.push_back( num );
	}
	
	for( int i = 0; i < sgns.size(); i++ ){
		signs.push_back( sgns[i] );
	}

	try{
		bool okay = true;
		vector<int> place = placeNumbers( numbers , signs );

		for( int i = 0; i < signs.size(); i++ ){
			if( signs[i] == '<' ){
	okay = okay && place[i] < place[i+1];
			}
			else{
	okay = okay && place[i] > place[i+1];
			}
		}

		if( okay ){
			cout << "VALID" << endl;
		}
		else{
			cout << "INVALID" << endl;
		}

		for( int i = 0; i < signs.size(); i++ ){
			cout << place[i] << " ";
			if( signs[i] == '<' ){
	cout << "<" << " ";
			}
			else{
	cout << ">" << " ";
			}
		}
		cout << place[place.size()-1] << endl;
	}
	catch( exception e ){
		cerr << "An error occurred." << endl;
	}
}
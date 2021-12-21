/*
Problem Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Leetcode 17:  Letter Combinations of a Phone Number
*/

#include <bits/stdc++.h>

using namespace std;

string getKeys( const char str ){
	if( str == '2' ){
		return "abc";
	}
	else if( str == '3' ){
		return "def";
	}
	else if( str == '4' ){
		return "ghi";
	}
	else if( str == '5' ){
		return "jkl";
	}
	else if( str == '6' ){
		return "mno";
	}
	else if( str == '7' ){
		return "pqrs";
	}
	else if( str == '8' ){
		return "tuv";
	}
	else if( str == '9' ){
		return "wxyz";
	}
	else{
		return "";
	}
}

vector< string > getAllCombination( const int currentIndex, const string &numbers, vector< string > result ){
	int size = numbers.size();

	if( currentIndex == size ){
		return result;
	}

	string keys = getKeys( numbers[ currentIndex ] );

	if( !keys.empty() ){
		if( result.empty() ){
			for( int i = 0; i < keys.size(); i++ ){
				result.push_back( string( 1, keys[i] ) );
			}
			return getAllCombination( currentIndex + 1, numbers, result );
		} else{
			vector< string > newResult;
			for( int i = 0; i < keys.size(); i++ ){
				for( int j = 0; j < result.size(); j++ ){
					newResult.push_back( result[j] + keys[i] );
				}
			}

			return getAllCombination( currentIndex + 1, numbers, newResult );
		}
	}
}

// void getAllCombination( const int currentIndex, const string &numbers, vector< string > currentResult, vector< string > &result ){
// 	int size = numbers.size();

// 	if( currentIndex == size ){
// 		// for( auto &str : result ){
// 		// 	cout << " " << str;
// 		// }
// 		result = currentResult;
// 		return;
// 	}

// 	string keys = getKeys( numbers[ currentIndex ] );


// 	if( !keys.empty() ){
// 		if( result.empty() ){
// 			for( int i = 0; i < keys.size(); i++ ){
// 				// result.push_back( string( 1, keys[i] ) );
// 				currentResult.push_back( string( 1, keys[i] ) );
// 			}

// 			getAllCombination( currentIndex + 1, numbers, currentResult, result );
// 		} else{
// 			vector< string > newResult;
// 			for( int i = 0; i < keys.size(); i++ ){
// 				for( int j = 0; j < currentResult.size(); j++ ){
// 					newResult.push_back( currentResult[j] + keys[i] );
// 				}
// 			}

// 			// currentResult = newResult;
// 			getAllCombination( currentIndex + 1, numbers, newResult, result );
// 		}
// 	}

// }

int main(){

	string numbers;
	cin >> numbers;

	cout << endl << numbers << endl;

	vector< string > result;
	vector< string > actualResult;

	result = getAllCombination( 0, numbers, result );

	for( int i = 0; i < result.size(); i++ ){
		cout << endl << result[i];
	}

	return 0;
}
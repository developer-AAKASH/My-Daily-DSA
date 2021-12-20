#include <bits/stdc++.h>

using namespace std;

void subsets( int currentIndex, const vector< int > &nums, vector< int > &currentResult, vector< vector< int > > &result ){
	int size = nums.size();

	if( currentIndex == size ){
		result.push_back( currentResult );
		return;
	}

	// Include
	currentResult.push_back( nums[ currentIndex ] );
	subsets( currentIndex + 1, nums, currentResult, result );
	currentResult.pop_back();

	// Exclude
	int i, currentElement = nums[ currentIndex ];
	for( i = currentIndex; i < size && nums[i] == currentElement; i++ );
	subsets( i, nums, currentResult, result );
}

int main(){
	int size; 
	cin >> size; 

	vector< int > nums( size );
	for( int i = 0; i < size; i++ ){
		cin >> nums[i];
	}

	sort( nums.begin(), nums.end() );

	vector< int > currentResult;
	vector< vector< int > > result;

	subsets( 0, nums, currentResult, result );

	for( int i = 0; i < result.size(); i++ ){
		for( int j = 0; j < result[i].size(); j++ ){
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
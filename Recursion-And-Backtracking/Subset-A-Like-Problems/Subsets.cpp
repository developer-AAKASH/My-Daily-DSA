#include <bits/stdc++.h>

using namespace std;

void subsets2( int currentIndex, const vector< int > &nums, vector< int > &currentResult, vector< vector< int > > &result ){
	result.push_back( currentResult );

	for( int i = currentIndex; i < nums.size(); i++ ){
		if( i != currentIndex && nums[i] == nums[i-1] )
			continue;

		currentResult.push_back( nums[ currentIndex ] );
		subsets2( i+1, nums, currentResult, result );
		currentResult.pop_back();
	}
}

void subsets( int currentIndex, const vector< int > &nums, vector< int > &currentResult, vector< vector< int > > &result ){
	int size = nums.size();

	if( currentIndex == size ){
		result.push_back( currentResult );
		return;
	}

	// Include....
	currentResult.push_back( nums[ currentIndex ] );
	subsets( currentIndex + 1, nums, currentResult, result );
	currentResult.pop_back();

	// Exclude...
	subsets( currentIndex + 1, nums, currentResult, result );
}

int main()
{
	int size;
	cin >> size;

	vector< int > nums( size );
	for( int i = 0; i < size; i++ ){
		cin >> nums[i];
	}

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

/*
Input: [ 1, 2, 2 ]
OutPut: [
	[1,2,2],
	[1,2],
	[1],
	[2,2],
	[2],
	[]
]
*/
#include <bits/stdc++.h>

using namespace std;

vector< int > mergeTwoSortedArray( vector< int > &first, vector< int > &second ){
	const signed int firstSize = first.size();
	const signed int secondSize = second.size();

	vector< int > merged( firstSize + secondSize );
	int i = 0, j = 0, k = 0; 

	while( i < firstSize && j < secondSize ){
		if( first[i] < second[j] ){
			merged[k] = first[i];
			i++;
			k++;
		} else{
			merged[k] = second[j];
			j++;
			k++;
		}
	}

	while( i < firstSize ){
		merged[k] = first[i];
		i++;
		k++;
	}

	while( j < secondSize ){
		merged[k] = second[j];
		j++;
		k++;
	}

	return merged;
}

vector< int > mergeSortRecursion(  const int start, const int end, vector< int > nums ){
	if ( start == end ){
		vector< int > ans( 1 );
		ans[0] = nums[ start ];

		return ans; 
	}

	int mid = ( start + end )/2;
	vector< int > firstHalf = mergeSortRecursion( start, mid, nums );
	vector< int > secondHalf = mergeSortRecursion( mid+1, end, nums );

	vector< int > fullNums = mergeTwoSortedArray( firstHalf, secondHalf );

	return fullNums;
}

vector< int > mergeSort( vector< int > nums ){
	const int size = nums.size();

	vector< int > answer = mergeSortRecursion( 0, size-1, nums );

	return answer;
}

int main(){
	int size;
	cin >> size;

	vector< int > nums( size );

	for( int i = 0; i < size; i++ ){
		cin >> nums[i];
	}

	vector< int > answer = mergeSort( nums );

	cout << endl;
	for( int i = 0; i < size; i++ ){
		cout << answer[i] << " ";
	}

	return 0;
}
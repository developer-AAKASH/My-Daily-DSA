#include <bits/stdc++.h>

using namespace std;

// void quickSort( vector< int > nums, int start, int end ){
// 	if( start >= end ){
// 		return;
// 	}

// 	int pivot = nums[ end ];
// 	int pivotIndex = partation( nums, pivot, start, end );
// 	quickSort( nums, start, pivotIndex-1 );
// 	quickSort( nums, pivotIndex + 1, end );
// }

void partation( vector< int > &nums, const signed int pivot ){
	// 0 to j-1 -> less than equal to pivot ( <= Pivot )
	// j to i-1 -> greater than pivot -> ( > pivot )
	// i to end -> unknown

	int i = 0, j = 0;
	const int size = nums.size();

	while( i < size ){
		if( nums[i] > pivot ){
			i++;
		} else{
			// Swapping
			int temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
			// int temp = nums[j];
			// nums[j] = nums[i];
			// nums[i] = temp;

			i++;
			j++;
		}
	}
}

int main(){
	int size;
	cin >> size;

	vector< int > nums( size );

	for( int i = 0; i < size; i++ ){
		cin >> nums[i];
	}

	int pivot;
	cin >> pivot;

	cout << endl;
	for( int i = 0; i < size; i++ ){
		cout << nums[i] << " ";
	}

	partation( nums, pivot );

	cout << endl;
	for( int i = 0; i < size; i++ ){
		cout << nums[i] << " ";
	}

	return 0;
}

/*
	-----Questions can be solved using same algo....
	i). <= pivot/ >= pivot
	ii). partation odd one side and even other side
	iii). partation 0 one side and 1 other side
	iv). partation 0 one side and non-zero other side

	and so on ... basically partition related !!
*/
#include <bits/stdc++.h>

using namespace std;

// 0 1 1 2 3 5 8 13 .........

int fibbonacci( const int n ){
	// Base case...
	if( n == 0 ){
		return 0;
	}

	if( n == 1 || n == 2 ){
		return 1;
	}

	// Recursion Leap of faith that I will get answer for n-1 and n-2 so I just calculate for n.
	const int nThFibbonacci = fibbonacci( n-1 ) + fibbonacci( n-2 );

	// Returning the answer.....
	return nThFibbonacci;
}

int main(){
	int n;
	cin >> n;

	const int nThFibbonacci = fibbonacci( n );

	cout << endl << nThFibbonacci;

	return 0;
}
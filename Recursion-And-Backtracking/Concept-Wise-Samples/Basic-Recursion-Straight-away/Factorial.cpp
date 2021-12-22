#include <bits/stdc++.h>

using namespace std;

int factorial( const int n ){

	// Base-case
	if( n == 0 || n == 1 ){
		return 1;
	}

	// Recursion leap of faith that I will get n-1 so I just have to take care of n
	const int ans = n * factorial( n-1 );

	// Return the answer......
	return ans;
}

int main(){
	int n;
	cin >> n;

	const int factorialOfN = factorial( n );

	cout << endl << factorialOfN;

	return 0;
}
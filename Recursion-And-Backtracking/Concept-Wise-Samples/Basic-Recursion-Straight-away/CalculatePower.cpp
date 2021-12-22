#include <bits/stdc++.h>

using namespace std;


long long int power( const long long int n, const long long int m ){
	// Base case...
	if( m == 0 || n == 0 ){
		return 1;
	}

	// Recursion Leap of faith that I will get answer for n-1 and n-2 so I just calculate for n.
	long long int answer;
	// if m is odd ...
	if( m % 2 != 0 ){
		answer = power( n, m/2 );
		answer *= answer;
		answer = n * answer;
	}

	// if m is even...
	if( m % 2 == 0 ){
		answer = power( n, m/2 );
		answer *= answer;
	}

	// Returning the answer.....
	return answer;
}

int main(){
	int n, m;
	cin >> n >> m;

	const int nPowerM = power( n, m );

	cout << endl << nPowerM;

	return 0;
}
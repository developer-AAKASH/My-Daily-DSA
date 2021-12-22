
#include <math.h>
const long long int MOD = 1e9+7;

long long int power( const long long int n, const long long int m ){
	// Base case...
	if( m == 0 ){
		return 1;
	}
    
    if( n == 0 ){
        return 0;
    }

	// Recursion Leap of faith that I will get answer for n-1 and n-2 so I just calculate for n.
	long long int answer;
	// if m is odd ...
	if( m % 2 != 0 ){
		answer = power( n, m/2 ) % MOD;
		answer = ( ( answer % MOD ) * ( answer % MOD ) ) % MOD;
		answer = ( n * answer ) % MOD;
	}

	// if m is even...
	if( m % 2 == 0 ){
		answer = ( power( n, m/2 ) ) % MOD;
		answer = ( ( answer % MOD ) * ( answer % MOD ) ) % MOD;
	}

	// Returning the answer.....
	return answer % MOD;
}

long long int nthTermOfGP( long long int N, long long int A, long long int R) {
	long long int rPower = power( R, N-1) % MOD;
//     cout << "\n" << rPower << " " << A << " ";
    
    long long int answer = ( ( A ) * ( rPower ) ) % MOD;
//     cout << " " << answer;
    
    return answer;
}
/*
	Power-Logarithimic: https://nados.pepcoding.com/content/eb9863ac-63ac-4b94-881f-0aeb24df0985/0c54b191-7b99-4f2c-acb3-e7f2ec748b2a/ae41ae29-11ca-4ae4-8ec7-72a411fd59b6/d341a7c9-1269-409c-b851-0bb512289544/c3b8f1c7-1f16-4cb6-b4c9-1d144ef0608d/question/8ed5e886-1ee3-48af-8ec4-580c2fe09da4

	1. You are given a number x.
	2. You are given another number n.
	3. You are required to calculate x raised to the power n. Don't change the signature of power function.

	Note1 -> The previous version expects the call stack to be of n height. This function expects call function to be only log(n) high.

	Note2 -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
	
	Constraints
	1 <= x <= 10
	0 <= n <= 9
	
	Format
	Input
	A number x
	A number n
	
	Output
	x raised to the power n
	
	Example
	Sample Input
	2
	5
	
	Sample Output
	32

*/

#include <bits/stdc++.h>

using namespace std;

int powerLogarithmic(int x,int n){
    if( n == 0 ){
        return 1;
    }

    int nBy2 = powerLogarithmic( x, n/2 );

    // If n is even, than x^n = 2 * x^n/2;
    if( n % 2 == 0 ){
        return ( nBy2 * nBy2 );
    } else{
    // If n is odd, than x^n = x * ( 2 * x^n/2 );
        return x * (  nBy2 * nBy2  );
    }
    
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}
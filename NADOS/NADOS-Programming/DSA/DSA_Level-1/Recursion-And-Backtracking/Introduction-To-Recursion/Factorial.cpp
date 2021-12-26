/*
	Factorial: https://nados.pepcoding.com/content/eb9863ac-63ac-4b94-881f-0aeb24df0985/0c54b191-7b99-4f2c-acb3-e7f2ec748b2a/ae41ae29-11ca-4ae4-8ec7-72a411fd59b6/d341a7c9-1269-409c-b851-0bb512289544/c3b8f1c7-1f16-4cb6-b4c9-1d144ef0608d/question/2610d2ba-0b44-4faf-8a58-5d7bafe88564

	1. You are given a number n.
	2. You are required to calculate the factorial of the number. Don't change the signature of factorial function.

	Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

	Constraints
	0 <= n <= 10

	Format

	Input
	A number n

	Output
	factorial of n

	Example
	Sample Input
	5

	Sample Output
	120
s
*/

#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    if( n == 0 ){
        return 1;
    }       

    return n * factorial( n-1 );
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}
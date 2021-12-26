/*
	Print-Zig-Zag: https://nados.pepcoding.com/content/eb9863ac-63ac-4b94-881f-0aeb24df0985/0c54b191-7b99-4f2c-acb3-e7f2ec748b2a/ae41ae29-11ca-4ae4-8ec7-72a411fd59b6/d341a7c9-1269-409c-b851-0bb512289544/c3b8f1c7-1f16-4cb6-b4c9-1d144ef0608d/question/34355369-9d95-49c8-81a9-36c5c9877701

	Article which helps to reach to solution: https://nados.pepcoding.com/content/eb9863ac-63ac-4b94-881f-0aeb24df0985/0c54b191-7b99-4f2c-acb3-e7f2ec748b2a/ae41ae29-11ca-4ae4-8ec7-72a411fd59b6/d341a7c9-1269-409c-b851-0bb512289544/c3b8f1c7-1f16-4cb6-b4c9-1d144ef0608d/article/ae000485-c119-4155-9b89-7fdfcaa1f489

	1. Here are a few sets of inputs and outputs for your reference
	Input1 -> 1
	Output1 -> 1 1 1

	Input2 -> 2
	Output2 -> 2 1 1 1 2 1 1 1 2

	Input2 -> 3
	Output3 -> 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

	2. Figure out the pattern and complete the recursive function pzz to achieve the above for any positive number n.

	Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

	Constraints
	1 <= n <= 10

	Format
	Input
	A number n

	Output
	As discussed in point 1 of description

	Example
	Sample Input
	3
	Sample Output
	3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

	Expectation:
		For n = 2;
		Print: 2 1 1 1 2 1 1 1 2.

	Faith:
		We have strong faith that our function know how to print for n-1 ( here n = 1 ). according to the rule of "Recursion's Leap of Faith".

	Expectation meets Faith:
		1). Lets print n (here 2). => Output: 2
		2). let function print n-1 (here 1). => Output: 1 1 1
		3). Lets print n (here 2). => => Output: 2
		4). let function print n-1 (here 1). => Output: 1 1 1	
		5). Lets print n (here 2). => Output: 2

*/

#include <bits/stdc++.h>

using namespace std;

void pzz(int n){
    if( n == 0 ){
        return;
    }

 //    1). Lets print n (here 2).
    cout << n << " ";
	// 2). let function print n-1 (here 1).
    pzz( n-1 );
	// 3). Lets print n (here 2).
    cout << n << " ";
	// 4). let function print n-1 (here 1).		
    pzz( n-1 );
	// 5). Lets print n (here 2).
    cout << n << " ";
}



int main(){
    int n; cin>>n;
    pzz(n);
}

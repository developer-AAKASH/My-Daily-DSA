/*
	Get-Subsequences: https://nados.pepcoding.com/content/eb9863ac-63ac-4b94-881f-0aeb24df0985/0c54b191-7b99-4f2c-acb3-e7f2ec748b2a/ae41ae29-11ca-4ae4-8ec7-72a411fd59b6/d341a7c9-1269-409c-b851-0bb512289544/b0de95ee-d178-450a-b3a0-325eeaccfa58/question/6299c966-535d-48bd-b598-a71cfd401f61

	1. You are given a string str.
	2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
	Use sample input and output to take idea about subsequences.

	Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
	Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
	
	Constraints
	0 <= str.length <= 20
	
	Format
	
	Input
	A string str
	
	Output
	Contents of the arraylist containing subsequences as shown in sample output
	
	Example
	Sample Input
	abc
	
	Sample Output
	[, c, b, bc, a, ac, ab, abc]
*/

#include <bits/stdc++.h>

using namespace std;

void recursion( const int currentIndex, const string &str, string currentResult, vector< string > &result ){

    int size = str.size();

    if( currentIndex == size ){
        result.push_back( currentResult );
        return;
    }

     // Exclude    
    recursion( currentIndex + 1, str, currentResult, result );

    // Include
    const string tempResult =  currentResult + str[ currentIndex ];
    recursion( currentIndex + 1, str, tempResult, result );

}

vector<string> gss(string s){
    vector< string > result;
    string currentResult = "";

    recursion( 0, s, currentResult, result );

    return result;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << "[";
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << "]";
}
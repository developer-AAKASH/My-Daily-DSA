/*
	Link to Problem: https://leetcode.com/problems/wildcard-matching/
	Leetcode: 44. Wildcard Matching
*/

#include <bits/stdc++.h>

using namespace std;

bool isMatching( const int sourceCurrentIndex, const int patternCurrentIndex, const string &source, const string &pattern ){
    const int sourceSize = source.size();
    const int patternSize = pattern.size();

    if( sourceCurrentIndex == sourceSize && patternCurrentIndex == patternSize ){
        return true;
    }

    if( sourceCurrentIndex == sourceSize ){
        for( int i = patternCurrentIndex; i < patternSize; i++ ){
            if( pattern[i] != '*' ){
                return false;
            }

            return true;
        }
    }

    if( patternCurrentIndex == patternSize && sourceCurrentIndex != sourceSize ){
        return false;
    }

    bool answer = false;

    if( pattern[ patternCurrentIndex ] == '?' ){
        if( isMatching( sourceCurrentIndex + 1, patternCurrentIndex + 1, source, pattern )){
            answer = true;
        }
    }

    else if( pattern[ patternCurrentIndex ] == '*' ){
        if( isMatching( sourceCurrentIndex, patternCurrentIndex + 1, source, pattern ) ){
            answer = true;
        }

        if( isMatching( sourceCurrentIndex + 1, patternCurrentIndex, source, pattern ) ){
            answer = true;
        }
        
        if( isMatching( sourceCurrentIndex + 1, patternCurrentIndex + 1, source, pattern ) ){
            answer = true;
        }

        
    }

    // Both sourceCurrentIndex and patternCurrentIndex are pointing towards character....
    else if( pattern[ patternCurrentIndex ] == source[ sourceCurrentIndex ] && isMatching( sourceCurrentIndex + 1, patternCurrentIndex + 1, source, pattern ) ){
        answer = true;
    }

    return answer;
}


int main(){
	string source, target;
	cin >> source >> target;

	cout << endl << isMatching( 0, 0, source, target ) << endl;

	return 0;
}
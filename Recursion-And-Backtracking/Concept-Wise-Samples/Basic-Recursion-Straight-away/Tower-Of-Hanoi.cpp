#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi( const int numberOfDisk, const int source, const int helper, const int destination ){
	if( numberOfDisk == 0 ){
		return;
	}

	towerOfHanoi( numberOfDisk-1, source, destination, helper);
	cout << endl << numberOfDisk << "th disk moving from " << source << " to " << destination;
	towerOfHanoi( numberOfDisk-1, helper, source, destination );
}

int main(){
	int diskNumber;
	cin >> diskNumber;

	int source = 1, helper = 2, destination = 3;

	towerOfHanoi( diskNumber, source, helper, destination );

	return 0;
}
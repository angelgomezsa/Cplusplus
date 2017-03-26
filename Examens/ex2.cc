#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int n,m;
	while (cin >> n >> m) {
		for (int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				int mindist = i+j; 					// distance from top left corner
				mindist = min(mindist,m-1-j+i); 	// distance from top right corner
				mindist = min(mindist,n-1-i+j); 	// distance from bottom left corner
				mindist = min(mindist,(((n-1)-i)+(m-1)-j)); 	// distance from bottom right corner
				// distance from the center
				// n/2 is the number of vertical lines to the middle
				// m/2 is the number of horizontal lines to the middle
				// we use the abs value for the cases that the lines go beyond n/2 or m/2 
				mindist = min(mindist,abs((n/2)-i)+abs((m/2)-j)); 
				cout << mindist%10;
			}
			cout << endl;
		}
	}
}
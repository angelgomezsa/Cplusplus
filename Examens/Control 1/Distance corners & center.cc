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
			mindist = min(mindist,(n-1)+(m-1)-(i+j)); 	// distance from bottom right corner
			// distance from the center
			// (n/2)-1 is the number of vertical lines to the middle
			// (m/2)-1 is the number of horizontal lines to the middle
			// we use the abs value for the cases that the lines go beyond (n/2)-1 or (m/2)-1 
			mindist = min(mindist,abs(((n/2)-1)+((m/2)-1)-(i+j))); 
			
			
			
			// int dc1 = (n/2)-i; // distance from the mid of vertical lines
			// if (dc1 < 0) dc1 = -dc1; 
			// int dc2 = (m/2)-j; // distance from the mid of horizontal lines
			// if (dc2 < 0) dc2 = -dc2;
			// if (mindist > dc1+dc2) mindist = dc1+dc2;
			cout << mindist%10;
		}
		cout << endl;
	}
}
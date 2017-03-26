#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) {
			int mindist = i-1;			 // distance from the top border
			mindist = min(mindist,n-j);  // distance from the right border
			mindist = min(mindist,j-1);  // distance from the left border
			mindist = min(mindist,n-i);  // distance from the bottom border
			
			// distance from the diagonal
			if (i < j) mindist = min(mindist,j-i);
			else mindist = min(mindist,i-j);
			// distance from the inverted diagonal
			int j2 = n+1-j;
			if (i < j2) mindist = min(mindist,j2-i);
			else mindist = min(mindist,i-j2);
			cout << mindist%10;
			}
		cout << endl;
		}
	}
}
#include <iostream>
using namespace std;

int main () {
	
	int n,m;
	bool first = true;
	while (cin >> n >> m) {
		// if this is not the first rectangle to print, print 
		// a new line to separate the current rectangle 
		// from the previous one
		if (first) first = false;
		else cout << endl;
		int num = 10;
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				num--;
				if (num < 0) num = 9;
				cout << num; 
			} 
		cout << endl;
		}
	}
}
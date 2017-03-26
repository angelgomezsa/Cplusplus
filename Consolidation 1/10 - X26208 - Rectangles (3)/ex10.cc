#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int k,n,m;
	cin >> k >> n >> m;
	
	bool first = true;
	for (int i=0;i<k;i++) {
		if (first) first = false;
		else cout << endl;
		int num = 9;
		for (int j=0;j<n;j++) {
			for (int h=0;h<m;h++) {
				cout << num;
				num--;
				if (num < 0) num = 9;
			}
			cout << endl;	
		}
	}
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin>>n) {
		vector<int> v1(n);
		for (int i=0;i<n;i++) {
			cin >> v1[i];
		}
		int m;
		cin >> m;
		vector<int> v2(m);
		for (int i=0;i<m;i++) {
			cin >> v2[i];
		}
		
		int c,i,j;
		c=i=j=0;
		while (i < n and j < m) {
			if (v1[i] < v2[j]) {
				c++;
				i++;
			}
			else if (v1[i] > v2[j]) {
				c++;
				j++;
			}
			else {
				i++;
				j++;
			}
		}
		c+=n-i+m-j;
		cout << c << endl;
	}
	
}




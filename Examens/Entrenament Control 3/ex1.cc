#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	
	while (cin >> n) {
		vector<int> v(n);
		for (int i=0;i<n;i++) 
			cin >> v[i];
		
		int left=0;
		int right=n-1;
		while (left<=right) {
			if (left!=0) cout << ' ';
			cout << v[left];
			left++;
			if (left < right) {
				cout << ' ' << v[right];
				right--;
			}
		}
		cout << endl;
	}
}
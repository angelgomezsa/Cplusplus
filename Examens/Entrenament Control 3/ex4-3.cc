#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i=0;i<n;i++) {
		cin >> v[i];
	}
	
	int count = n;
	for (int i=0;i<n;i++) {
		for (int j=i;j<n;j++) {
			if (v[i] == -v[j]) 
				if (v[i] == 0) count--;
				else count-=2;
		}
	}
	cout << count << endl;
}
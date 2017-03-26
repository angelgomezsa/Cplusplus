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
	
	int count = 0;
	for (int i=0;i<n;i++) {
		if (v[i] < 0) {
			int j=n-1;
			while (v[j] > -(v[i])) j--;
			if (v[j] != (-v[i])) count++;
		}
		else if (v[i] > 0) {
			int j=0;
			while (v[j] < -(v[i])) j++;
			if (v[j] != (-v[i])) count++;
		}
	}
	
	cout << count << endl;
}

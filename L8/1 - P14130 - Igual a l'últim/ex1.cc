#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<int> S(n);
	
	int count=0;
	for (int i=0;i<n;i++) {
		cin >> S[i];
	}
	for (int i=0;i<n-1;i++) {
		if (S[i] == S[n-1]) count++;
	}
	cout << count << endl;
}
	

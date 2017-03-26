#include <iostream>
#include <vector>
using namespace std;

bool found(int x, const vector<int>& v, int left, int right) {
	while (left <= right) {
		int i = (left+right)/2;
		if (x > v[i]) left = left+1;
		else if ( x < v[i]) right = right-1;
		else return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i=0;i<n;i++) {
		cin >> v[i];
	}
	int count=0;
	int right = n-1;
	for (int i=0;i<n;i++) {
		int left = i;
		if (found(-v[i],v,i,right)) count++;
	}
	cout << count << endl;
}


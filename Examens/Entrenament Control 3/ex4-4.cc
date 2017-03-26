#include <iostream>
#include <vector>
using namespace std;

bool found(const vector<int>& v, int x) {
	int left=0;
	int right = int(v.size())-1;
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
	for (int i=0;v[i]<0;i++) 
		if (found(v,-v[i])) count++; 
	cout << count << endl;
}
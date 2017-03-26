#include <iostream>
#include <vector>
using namespace std;

void classify(vector<int>& v, int x, int y) {
	int left = 0;
	int mid = 0;
	int right = v.size()-1;
	
	while (mid <= right) {
		if (v[mid] < x) {
			swap(v[mid],v[left]);
			left = left + 1;
			mid = mid +1;
		} else if (v[mid] > y) {
			swap(v[mid],v[right]);
			right = right + 1;
		} else mid = mid + 1;
	}
}

int main () {
	
	vector<int> v(10);
	cout << "Enter the 10 elements of the vector" << endl;
	for (int i=0;i<10;i++) {
		cin >> v[i];
	}
	cout << "Enter the interval [x,y]" << endl;
	
	int x,y;
	cin >> x >> y;
	
	classify(v,x,y);
	
	for (int i=0;i<10;i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
}
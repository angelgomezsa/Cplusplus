#include <iostream>
#include <vector>
using namespace std;

void classify(vector<int>& v, int x, int y) {
	
	int treat=0;
	int right = v.size()-1;
	while (treat <= right) {
		if (v[treat] > x and v[treat] < y) {
			// put in the middle
			bool swapped = false;
			for (int i=right;i>treat and not swapped;i--) {
				if (v[i] < x) {
					swap(v[treat],v[i]);
					swapped = true;
				}
			}
		}
		if (v[treat] > y) {
			// put in the right
			swap(v[treat],v[right]);  
			right--;
		}
		// leave in the left
		else treat++;
			
		
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
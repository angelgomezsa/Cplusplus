#include <iostream>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		int prev;
		cin >> prev;
		int next,count=0;
		for (int i=1;i<n;i++) {
			cin >> next;
			if (prev > 0 and next < 0 or prev < 0 and next > 0) count ++;
			prev = next;
		}
		cout << count << endl;
	}
}
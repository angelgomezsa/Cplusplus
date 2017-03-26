#include <iostream>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		int next,max;
		cin >> max;
		for (int i=1;i<n;i++) {
			cin >> next;
			if (next > max) max = next;
		}
		cout << max << endl;
	}
}
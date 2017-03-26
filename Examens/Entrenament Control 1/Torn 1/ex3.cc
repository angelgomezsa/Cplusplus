#include <iostream>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		int prev;
		cin >> prev;
		int sum = 0;
		for (int i=1;i<n;i++) {
			int next;
			cin >> next;
			if (next%2==0) sum+=prev;
			prev = next;
		}
		cout << sum << endl;
	}
}
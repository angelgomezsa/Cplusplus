#include <iostream>
using namespace std;

int main () {
	
	int k;
	while (cin >> k) {
		int next,prev,dist;
		int max_dist = 0;
		bool first = true;
		for (int i=0;i<k;i++) {
			cin >> next;
			if (first) {
				prev = next;
				first = false;
			}
			dist = next-prev;
			if (dist < 0) dist = -dist;
			if (dist > max_dist) max_dist = dist;
			prev = next;
		}
		cout << max_dist << endl;
	}
}
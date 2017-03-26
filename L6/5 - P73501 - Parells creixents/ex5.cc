#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for (int i=0;i<n;i++) {
		int prev,next;
		cin >> prev;
		int mesgran = 0;
		if (prev!=0) {	
			while (cin >> next and next !=0) {
				if (next > prev) mesgran++;
				prev = next;
			}
		}
		cout << mesgran << endl;
	}
}
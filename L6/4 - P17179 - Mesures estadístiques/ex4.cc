#include <iostream>
using namespace std;

int main() {
	
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int m;
	cin >> m;
	for (int a=0;a<m;a++) {
		int n;
		while (cin >> n) {
			double prev;
			cin >> prev;
			double min=prev,max=prev,med=prev;
			for (int i=1;i<n;i++) {
				double next;
				cin >> next;
				if (next > max) max = next;
				if (next < min) min = next;
				med+=next;
				prev = next;
			}
			med = med/n;
		
		cout << min << " " << max << " " << med << endl;
		}
	}
}
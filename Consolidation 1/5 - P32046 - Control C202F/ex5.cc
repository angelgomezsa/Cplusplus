#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	cout << "nombres que acaben igual que " << n << ":" << endl; 
	int seq;
	int count = 0;
	while (cin >> seq) {
		if (seq%1000 == n%1000) {
			cout << seq << endl;
			count++;
		}
	}
	cout << "total: " << count << endl;
}
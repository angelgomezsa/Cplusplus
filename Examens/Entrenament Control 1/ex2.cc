#include <iostream>
using namespace std;

int main() {
	
	int n,neg=0,pos=0;
	
	while (cin >> n) {
		if (n < 0) neg+=n;
		else pos+=n;
	}
	cout << "Sum Pos: " << pos << endl;
	cout << "Sum Neg: " << neg << endl;
}
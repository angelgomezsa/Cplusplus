#include <iostream>
#include <cmath>
using namespace std;

int max2(int a, int b) {
	return max(a,b);
}

int main () {
	
	int a,b;
	while (cin >> a >> b) {
		cout << max2(a,b) << endl;
	}
}

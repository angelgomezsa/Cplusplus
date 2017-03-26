#include <iostream>
#include <cmath>
using namespace std;

int max4(int a, int b, int c, int d) {
	return max(a,max(b,(max(c,d))));
}

int main () {
	
	int a,b,c,d;
	while (cin >> a >> b >> c >> d) {
		cout << max4(a,b,c,d) << endl;
	}
}
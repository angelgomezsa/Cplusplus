#include <iostream>
using namespace std;

int main () {
	
	int x;
	cin >> x;
	
	int m,c;
	while (cin >> m) {
		if (m%x == 0) c++;
	}
	
	cout << c << endl;
}
#include <iostream>
using namespace std;

int main() {
	
	string a,b;
	while (cin >> a >> b) {
		if (a < b) cout << a << " " << b << endl;
		else cout << b << " " << a << endl;
	}
}
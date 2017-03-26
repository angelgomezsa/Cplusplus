#include <iostream>
using namespace std;

int main() {
	
	char c;
	
	bool found;
	while (cin >> c and c != '.' and not found) {
		found = (c == 'a');
	}
	if (found) cout << "si" << endl;
	else cout << "no" << endl;
}
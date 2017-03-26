#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int pos=1;
	int num;
	bool found = false;
	while (cin >> num and pos <= n and num != -1) {
		if (pos == n) {
			cout << "A la posicio " << pos << " hi ha un " << num << "." << endl; 
			found = true;
		}
		pos++;
	}
	if (not found) cout << "Posicio incorrecta." << endl;
}
#include <iostream>
using namespace std;

int main() {
	
	int n;
	int pos=1;
	while (cin >> n and n%2 != 0) {
		pos++;
	}
	
	cout << pos << endl;
}
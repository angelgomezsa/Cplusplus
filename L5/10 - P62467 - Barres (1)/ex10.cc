#include <iostream>
#include <string>
using namespace std;

void escriu(int n) {
	if (n == 0) return;
	escriu(n-1);
	cout << string(n,'*') << endl;
	escriu(n-1);
}


int main() {
	
	int n;
	cin >> n;
	
	escriu(n);
}
#include <iostream>
#include <string>
using namespace std;

void escriu(int n) {
	if (n == 0) return;
	cout << string(n,'*') << endl;
	escriu(n-1);
	escriu(n-1);
//	cout << '*' << endl;
}


int main() {
	
	int n;
	cin >> n;
	
	escriu(n);
}
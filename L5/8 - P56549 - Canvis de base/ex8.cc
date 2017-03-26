#include <iostream>
using namespace std;

void printdigit(int n) {
	if (n > 9) cout << char(n-10+'A');
	else cout << n;
}

void baseb(int n, int b) {
	if (n >= b) baseb(n/b,b);
	printdigit(n%b);
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << " = ";
		baseb(n,2); 
		cout << ", ";
		baseb(n,8);
		cout << ", ";
		baseb(n,16);
		cout << endl;
	}
}
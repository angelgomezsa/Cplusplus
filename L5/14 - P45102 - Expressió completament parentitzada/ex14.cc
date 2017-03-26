#include <iostream>
using namespace std;

int evalua() {
	char c;
	cin >> c;
	if (c >='0' and c <='9') return c-'0';
	int e1=evalua();
	char op;
	cin >> op;
	int e2=evalua();
	cin >> c;
	if (op == '+') return e1+e2;
	if (op == '-') return e1-e2;
	return e1*e2;
}

int main() {
	
	cout << evalua() << endl;
}
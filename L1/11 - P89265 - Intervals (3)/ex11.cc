#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	if (b < c) {
	cout << "? , []" << endl;
	}
	else if (a > d) {
	cout << "? , []" << endl;
	}	
	else if (a > c and b < d) {
		cout << "1 , [" << a << "," << b << "]" << endl;
	}
	else if (a > c and b > d) {
		cout << "? , [" << a << "," << d << "]" << endl;
	}
	else if (a == c and b > d) {
		cout << "2 , [" << a << "," << d << "]" << endl;
	}
	else if (a == c and b < d) {
		cout << "1 , [" << a << "," << b << "]" << endl;
	}
	else if (a > c and b == d) {
		cout << "1 , [" << a << "," << b << "]" << endl;
	}
	else if (a < c and b == d) {
		cout << "2 , [" << c << "," << b << "]" << endl;
	}		
	else if (a < c and b > d) {
		cout << "2 , [" << c << "," << d << "]" << endl;
	}
	else if (a == c and b == d) {
		cout << "= , [" << a << "," << b << "]" << endl;
	}
	else if (a < c and b == c) {
		cout << "? , [" << b << "," << b << "]" << endl;
	}
	else if (a > c and a == d) {
		cout << "? , [" << a << "," << a << "]" << endl;
	}
	else if (a < c and b < d) {
		cout << "? , [" << c << "," << b << "]" << endl;
	}
}			
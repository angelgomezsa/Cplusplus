#include <iostream>
using namespace std;

int nombre_digits(int n) {
	if (n <=9) return 1;
	else return nombre_digits(n/10)+1;
}

int main () {
	int n;
	cin >> n;
	cout << nombre_digits(n) << endl;
}
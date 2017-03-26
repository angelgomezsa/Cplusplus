#include <iostream>
using namespace std;


int suma_digits(int x) {
   if (x < 10) return x; 
   else return suma_digits(x/10+x%10);
}


int main () {
	
	int x;
	cin >> x;
	
	cout << suma_digits(x) << endl;
}
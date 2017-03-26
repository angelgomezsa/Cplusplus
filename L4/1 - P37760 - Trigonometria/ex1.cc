#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
	cout.setf(ios::fixed); 
	cout.precision(6);
  
	double n;
	while (cin >> n) {
		double sinus = sin((n*M_PI)/180);
		double cosinus = cos((n*M_PI)/180);
		cout << sinus << " " << cosinus << endl;
	}
}
  
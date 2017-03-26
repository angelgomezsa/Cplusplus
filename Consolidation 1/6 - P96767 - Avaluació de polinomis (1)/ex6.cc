#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double x;
	cin >> x;
	
	double c;
	int count = 0;
	double total = 0;
	while (cin >> c) {
		total = c*(pow(x,count))+total;
		count++;
	}
	cout << total << endl;
}
	
	
	
	
	
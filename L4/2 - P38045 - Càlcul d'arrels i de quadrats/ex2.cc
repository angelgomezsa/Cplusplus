#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
	cout.setf(ios::fixed); 
	cout.precision(6);
  	
	int n;
	while (cin >> n) {
		int squared = n*n;
		double root = sqrt(n);
		cout << squared << " " << root << endl;
	}
}

#include <iostream>
using namespace std;

int main () {

	cout.setf(ios::fixed); 
	cout.precision(2);	
		
	int n;
	cin >> n;
	
	double x,sum1;
	double sum2 = 0; 
	for (int i; i<n;i++) {
		cin >> x;
		sum2 = x + sum2;
		sum1 = x*x + sum1;
		
	}

	sum2 = sum2*sum2;
	cout << ((1./(n-1))*sum1)-((1./(n*(n-1)))*sum2) << endl;

}
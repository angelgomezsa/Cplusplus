#include <iostream>
using namespace std;

bool es_creixent(int n) {
	int m = n;
	m = m/10;
	if (n <= 9) return true;
	else if (m%10 <= n%10) return es_creixent(n/10);
	else return false;
}


int main () {
	
	int n;
	cin >> n;
	
	cout << es_creixent(n) << endl;
}
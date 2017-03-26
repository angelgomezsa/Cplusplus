#include <iostream>
using namespace std;

bool is_odd_even_increasing() {
	bool incr = true;
	int odd,even;
	cin >> odd >> even; // reads the first 2 integers
	int next,pos=3;
	while (cin >> next and incr) { // reads the next integer
		if (pos%2 != 0) { // checks whether it's in an odd or even position;
			incr = (next >= odd);
			odd = even;
			even = next;
		}
		else {
			incr = (next >= even);
			even = odd;
			odd = next;
		}
	}
	return incr;
}


int main() {
	
	if (is_odd_even_increasing()) cout << "yes" << endl;
	else cout << "no" << endl;
}
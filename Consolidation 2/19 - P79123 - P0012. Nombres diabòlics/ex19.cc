#include <iostream>
#include <cmath>
using namespace std;

// count the sum of the digits in base 4 (255 is 3333 in base 4 and its sum is 3+3+3+3 = 12)
int base4(int n) {
	if (n <= 3) return n;
	int sum_dgts=base4(n/4);
	return sum_dgts+n%4;
}
// checks if the double of the sum of the digits of a n number in base 4 is a multiple of said n number;
bool es_diabolic(int n) {
	if (n%(base4(n)*2) == 0) return true;
	else return false;
}
// counts the number of digits of a given number;
int digits(int n) {
	if (n == 0) return 0;
	int dgts = digits(n/10);
	return dgts+1;
}

int main() {
	
	int n;
	int count = 0;
	while (cin >> n and n != -1) 
		if (es_diabolic(n)) count++;
	
	if (count == 0) cout << string(6,'0') << endl;
	else cout << string(6-digits(count),'0') << count << endl;
}

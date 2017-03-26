#include <iostream>
#include <cmath>
using namespace std;

int sum_digits(int n) {
	int digits=1;
	while (n > 9) {
		digits++;
		n/=10;
	}
	return digits;
}

int digit_central(int n) {
	if (n > 9) {
		n/= pow(10,sum_digits(n)/2);
		return n%10;
	}
	else return n;
}

int main() {
	
	int n;
	cin >> n;
	
	int prev;
	cin >> prev; // read the first number
	bool win = false; // noone has won yet
	if (sum_digits(prev)%2 == 0) win = true;
	else prev = digit_central(prev);
	int next,count=1;
	while (cin >> next and count<(n*2) and (not win)) { 
	// if we're still within the sequence lenght and noone has won
	// read the next number
		if (sum_digits(next)%2 == 0) win = true;
		next = digit_central(next);
		if (prev == next) prev = next;
		else win = true;
		count++;
	}
	
	// resultats
	
	if (win and count%2 == 0) cout << "A" << endl;
	else if (win and count%2 != 0) cout << "B" << endl;
	else cout << "=" << endl;
}
	
	
	
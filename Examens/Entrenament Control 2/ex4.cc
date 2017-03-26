#include <iostream>
using namespace std;

bool is_circular_increasing() {
	int first;
	int prev;
	cin >> first;
	prev = first;
	int next;
	bool seq1 = true;
	while (cin >> next) {
		if (seq1) {
			if (prev <= next) prev = next;
			else {
				seq1 = false;
				prev = next;
			}
		}
		if (not seq1 and prev <= next and  next <= first) prev = next;
		else if (not seq1 and (prev > next or next > first)) return false;
	}
	return true;
}


int main() {
	
	if (is_circular_increasing()) cout << "yes" << endl;
	else cout << "no" << endl;
	
}
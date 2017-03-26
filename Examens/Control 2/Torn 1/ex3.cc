#include <iostream>
using namespace std;

bool is_sawtooth() {
	int prev2,prev1;
	bool sawtooth = true;
	cin >> prev2 >> prev1;
	int next;
	while (cin >> next and sawtooth) {
		sawtooth = ((prev2 > prev1 and prev1 < next) or (prev2 < prev1 and prev1 > next));
		prev2 = prev1;
		prev1 = next;
	}
	return sawtooth;
}

int main() {
	
	if (is_sawtooth()) cout << "yes" << endl;
	else cout << "no" << endl;
}
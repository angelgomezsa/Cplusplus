#include <iostream>
using namespace std;

int main () {
	
	char c;
	int eastwest = 0;
	int southnorth = 0;
	while (cin >> c) {
		if (c == 'e') eastwest++;
		if (c == 'o') eastwest--;
		if (c == 's') southnorth++;
		if (c == 'n') southnorth--;
	}
	cout << "(" << eastwest << ", " << southnorth << ")" << endl;
}
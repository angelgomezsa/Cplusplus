#include <iostream>
using namespace std;

void escriu_triangle(int t) {
	int sp=2*t-1;
	for (int i=0;i<t*2;i++,sp--) {
		if (i%2 == 0) {
			cout << string(sp,' ') << "/\\";
			for (int j=0;j<i/2;j++)
				cout << "  /\\";
			cout << endl;
		}
		else {
			cout << string(sp,' ');
			for (int j=0;j<i/2+1;j++)
				cout << "/__\\";
			cout << endl;
		}
	}
	cout << endl;
}

int main() {
	
	int t;
	while (cin >> t and t>0) 
		escriu_triangle(t);
}
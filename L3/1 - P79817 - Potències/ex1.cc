#include <iostream>
using namespace std;

int main () {
	
	int a,b;
	int p = 1;
	while (cin >> a >> b) {	
		for (int i=0;i<b;i++) p = p*a;
		cout << p << endl;
		p = 1;
	}
}
	
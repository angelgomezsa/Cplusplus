#include <iostream>
using namespace std;

int main () {
	
	int x,y;
	cin >> x >> y;
	
	if (x < y) swap(x,y);
	
	for (x;x>=y;x--) cout << x << endl;
}
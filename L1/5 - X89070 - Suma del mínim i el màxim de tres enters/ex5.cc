#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int x,y,z;
	cin >> x >> y >> z;
	
	int minim,maxim;
	
	minim = min(min(x,y),z);
	maxim = max(max(x,y),z);
	
	cout << minim+maxim << endl;
}
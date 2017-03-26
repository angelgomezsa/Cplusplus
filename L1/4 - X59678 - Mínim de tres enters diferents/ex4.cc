#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int x,y,z;
	cin >> x >> y >> z;
	
	z = min(min(x,y),z);
	
	cout << z << endl;
}
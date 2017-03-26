#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int a,b,c,d;
	while (cin >> a >> b >> c >> d) {
		int sol = 0;
		int y=c;
		while (a <= b) {
			if (int(sqrt(a*a+y*y))*int(sqrt(a*a+y*y)) == a*a+y*y) sol++;
			y++;
			if (y>d) {
				y = c;
				a++;
			}
		}
		cout << sol << endl;
	}
}
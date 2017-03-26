#include <iostream>
#include <string>
using namespace std;

int escriu(int n) {
	string s;
	if (cin>>s) {
		n++;
		int c=escriu(n);
		if (n<=c) {
			cout << s <<endl;
		}
		return c;
	}
    return n/2;
}

int main() {
	
	escriu(0);
}
#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	for (int i=0;i<n;i++) {
		for (int j=i; j<=n-2;j++) {
			cout <<"+";
		}
		cout << "/";
		
		for (int k=0; k<=i-1;k++) {
			cout <<"*";
		}
		cout << endl;
	}
}
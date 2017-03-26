#include <iostream>
#include <vector>
using namespace std;

int nombre_digits(int n) {
	if (n<10) return 1;
	return 1+nombre_digits(n/10);
}
	
void valls(int n, int f) {
	int dots=nombre_digits(n)+1;
	for (int i=1;i<=f;i++) {
		for (int j=1;j<=i;j++) {
			if (j!=1) cout <<'-';
			cout << n;
		}
		for (int k=0;k<dots*(f-i);k++) 
			cout << '.';
		cout << '.';
		for (int k=0;k<dots*(f-i);k++) 
			cout << '.';
		for (int j=1;j<=i;j++) {
			if (j!=1) cout <<'-';
			cout << n;
		}		
		cout << endl;	
	}
} 
	
int main() {
	int n,f;
	cin >> n >> f;
	valls(n,f);
}
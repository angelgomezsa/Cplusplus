#include <iostream>
using namespace std;

int main() {
	
	int n;
	
	while (cin >> n) {	
		int sum=0;
		for (int i=1;i<=n;i++) 
			sum+=i;
	
		int sumseq=0,seq;
		for (int i=1;i<n;i++) {
			cin >> seq;
			sumseq+=seq;
		}
		cout << sum-sumseq << endl;
	}
}
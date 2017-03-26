#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		int max_n=0,num,sumseq=0;
		for (int i=0;i<n;i++) {
			cin >> num;
				max_n = max(max_n,num);
				sumseq+=num;
		}
		if (sumseq-max_n == max_n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
	
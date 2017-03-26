#include <iostream>
using namespace std;

int main() {
	
	int l,r;
	cin >> l >> r;
	
	int n,sum=0,num=0;
	while (cin >> n) {
		if (n >= l and n <= r) sum+=n;
		else num++;
	}
	cout << "Sum Inside: " << sum << endl;
	cout << "Num Outside: " << num << endl;
}
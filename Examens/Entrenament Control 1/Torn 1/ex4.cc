#include <iostream>
using namespace std;

int main() {
	
	int n;
	bool first = true;
	while (cin >> n) {
		if (not first) cout << endl;
		first = false;
		int a = (n*2)-1;
	//	top
		for (int s=0;s<n;s++,a-=2) 
			cout << string(s,' ') << string(a,'X') << endl;
		
		a+=4;
	//	bottom
		for (int s=n-2;s>=0;s--,a+=2) 
			cout << string(s,' ') << string(a,'X') << endl;
		
	}
}

#include <iostream>
using namespace std;

int main () {
	
	int n;
	while (cin >> n) {
		// top
		int x = n;
		for (int b=n-1;b>0;b--,x+=2) 
			cout << string(b,' ') << string(x,'X') << endl;
		// center
		for (int i = 0;i<n;i++)
			cout << string(x,'X') << endl;
		// bottom
		x-=2;
		for (int b=1;x>=n;b++,x-=2)
			cout << string(b,' ') << string(x,'X') << endl;
		
		cout << endl;
	}
}

	
		// int pdm1 = (n-1)+n;
	
		// for (int i = 0;i<n-1; i++) {
			// for (int j = 0;j<pdm1+i;j++) {
				// if (j < pdm1-n-i) cout << " ";
				// else cout << "X";
			// }
			// cout << endl;
		// }
	
// center

		// int cntr = (n-1)*2+n;
	
		// for (int i=0;i<n;i++) {
			// for (int j = 0;j<cntr;j++) cout << "X";
			// cout << endl;
		// }

// bottom 

	
		// for (int i = 0;i<n-1; i++) {
			// for (int j = 0;j<cntr-i-1;j++) {
				// if (j < i+1) cout << " ";
				// else cout << "X";
			// }
			// cout << endl;
		// }
	// cout << endl;
	// }	
// }
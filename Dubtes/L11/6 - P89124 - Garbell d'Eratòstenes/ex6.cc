#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n=1000001;
	vector<bool> v(n,true);
	v[0] = false;
	v[1] = false;
	for (int i=2;i*i<n;i++) 
		if (v[i] == true) 
			for (int j=i*i;j<n;j+=i) 
				v[j] = false;
		
	// Pre: x >= 0
	int x;
	while (cin >> x) {
		if (v[x] == true) cout << x << " es primer" << endl;
		else cout << x << " no es primer" << endl;
	}
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i=0;i<n;i++)
			cin >> v[i];
		sort(v.begin(),v.end());
		int x=v[0];
		int dif=1;
		for (int i=0;i<n;i++) {
			if (x!=v[i]) {
				dif++;
				x=v[i];
			}
		}
		cout << dif << endl;
	}
}
	
	
	
	

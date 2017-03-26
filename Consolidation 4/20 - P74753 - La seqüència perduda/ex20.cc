#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while(cin>>n) {
		vector<int> f(n);
		for (int i=0;i<n;i++) {
			if (i==0)   f[i]=-3;
			else if (i == 1) f[i]=-1;
			else if (i == 2) f[i]=4;
			else if (i == 3) f[i]=8;
			else if (i == 4) f[i]=15;
			else f[i]=f[i-5] + f[i-3] + f[i-1];
			cout << f[i] << ' ';
		}
		cout << "..."<<endl;
	}
}
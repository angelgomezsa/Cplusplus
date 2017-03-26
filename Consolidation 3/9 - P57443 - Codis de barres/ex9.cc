#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	char num;
	while (cin >> num) {
		vector<int> codi(12,0);
		int sum = 0;
		int n = num-'0';
		codi[0] = n;
		sum = n;
		for (int i=1;i<codi.size();i++) {
			cin >> num;
			n = num-'0';
			codi[i] = n;
			if (i%2==0) sum+= n;
			else sum+=n*3;
		}
	
		if (sum%10 == 0) codi.push_back(0);
		else {
			int dec = sum-sum%10+10;
			codi.push_back(dec-sum);
		}
		for (int i=0;i<codi.size();i++) cout << codi[i];	
		cout << endl;
	}
}
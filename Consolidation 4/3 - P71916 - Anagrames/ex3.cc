#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n > 0) {
		int abc = 'Z'-'A'+1;
		vector<int> f1(abc,0);
		vector<int> f2(abc,0);
		char c;
		while (cin >> c and c!='.') {
			if (c>= 'A' and c <= 'Z') {
				++f1[c-'A'];
			}
		}
		while (cin >> c and c!='.') {
			if (c>= 'A' and c <= 'Z') {
				++f2[c-'A'];
			}
		}
		if (f1==f2) cout << "SI"<< endl;
		else cout << "NO" << endl;
		n--;
	}
}
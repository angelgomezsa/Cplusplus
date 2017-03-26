#include <iostream>
using namespace std;

int main() {
	
	char c;
	int obert=0,tancat=0,result=0;
	while (cin >> c and result >= 0) {
		if (c == '(') obert++;
		else tancat++;
		result = obert-tancat;
	}
	if (result==0) cout << "si" << endl;
	else cout << "no" << endl;
}
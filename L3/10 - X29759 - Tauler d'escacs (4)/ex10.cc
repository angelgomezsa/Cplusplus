#include <iostream>
using namespace std;

int main () {
	
	int c;
	cin >> c;
	
	char num;
	int n;
	int blanques=0;
	int negres=0;
	for (int i=0;i<c;i++) {
		for (int j=0;j<c;j++) {
			cin >> num;
			n = num-48;
			if (i%2 == 0) {
				if (j%2 == 0) blanques = n+blanques;
				else negres = n+negres;
			}
			else if (j%2 != 0) blanques = n+blanques;
			else negres = n+negres;
		}
	}
	cout << blanques << "-" << negres << " = " << blanques-negres << endl;
}
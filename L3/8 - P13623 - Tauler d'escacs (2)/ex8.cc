#include <iostream>
using namespace std;

int main () {
	
	int f,c;
	cin >> f >> c;
	
	char num;
	int total=0;
	for (int i=0;i<f;i++) {
		for (int j=0;j<c;j++) {
			cin >> num;
			if ((i+j)%2 == 0) total+= num-'0';
			// if (i%2 == 0 and j%2 == 0) total+= num-'0';
			// else if (j%2 != 0) total+= num-'0';
		}
	}
	cout << total << endl;
}
#include <iostream>
using namespace std;

int main () {
	
	int f,c;
	cin >> f >> c;
	
	char num;
	int total=0;
	for (int i=0;i<f;i++) {
		for (int j=0;j<c;j++) {
			char num;
			cin >> num;
			total+=num-'0';
		}
	}
	cout << total << endl;
}
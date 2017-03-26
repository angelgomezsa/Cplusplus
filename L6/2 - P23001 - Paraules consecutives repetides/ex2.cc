#include <iostream>
using namespace std;

int main() {
	
	string first;
	cin >> first;
	
	int lenght=1,longest=1;
	string next;
	while (cin >> next) {
		if (first != next) lenght = 0;
		else {
			lenght++;
			if (lenght > longest) longest = lenght;
		}
	}
	cout << longest << endl;
}
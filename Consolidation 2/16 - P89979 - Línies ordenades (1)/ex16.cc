#include <iostream>
using namespace std;

int main() {
	
	int n;
	int cline = 0;
	bool ordenada;
	bool line_ord = false;
	while (cin >> n and not line_ord) {
		ordenada = true;
		if (n > 0) {
			string prev;
			cin >> prev;
			n--;
			while (n > 0) {
				string next;
				cin >> next;
				if (ordenada) {
					ordenada = (next >= prev);
					prev = next;
				}
				n--;
			}
		}
		cline++;
		line_ord = ordenada;
	}
	if (line_ord) cout << "La primera linia ordenada creixentment es la " << cline << "." << endl;
	else cout << "No hi ha cap linia ordenada creixentment." << endl;
}
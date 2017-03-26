#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,p;
	while (cin >> n >> p) {
		vector<char> v(n,'.');
		
		// read how many balls are going to the right
		int rb,prb;
		cin >> rb;
		// read at which positions are they starting at
		for (int i=0;i<rb;i++) {
			cin >> prb;
			v[prb-1] = '>';
		}
		
		// read how many balls are going to the left
		int lb,plb;
		cin >> lb;
		// and which positions are they starting at
		for (int i=0;i<lb;i++) {
			cin >> plb;
			v[plb-1] = '<';
		}
		
		// auxiliar vector	
		vector<char> aux(n);
		aux = v;
		
		// prints the current step
		// prepares the next step
		for (int s=0;s<p;s++) {
			v=aux;
			for (int i=0;i<n;i++) {
				cout << v[i];
				
				if (v[i] == '<') {
					if (v[i-1] == '>') aux[i+1] = '>';
					else if (i == 0) aux[1] = '>';
					else aux[i-1] = '<';
					aux[i] = '.';
				}
				if (v[i] == '>') {
					if (v[i+1] == '<') aux[i-1] = '<';
					else if (i == n-1) aux[n-2] = '<';
					else aux[i+1] = '>';
					aux[i] = '.';
				}
			}
			cout << endl;
		}
		cout << endl;
	}
}
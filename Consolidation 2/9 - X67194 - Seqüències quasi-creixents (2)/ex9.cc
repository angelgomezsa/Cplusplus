#include <iostream>
using namespace std;

void info_sequencia(int n, bool& es_qc, int& p_qc) {
	es_qc=true; 
	p_qc=2;
	bool semicreix = true;
	int prev2,prev1;
	// read the first two elements of the sequence
	cin >> prev2 >> prev1;
	// cp_qc = current positions	
	int next,cp_qc=2;		 
	for (int i=2;i<n;i++) {
		cin >> next;
		// if the current three elements are semi crescent, increase position by one
		// if the sequence is still semi crescent, update the current position to p_qc
		if ((prev2 < prev1) or (prev2 < next)) { 
			cp_qc++;
			if (semicreix) p_qc=cp_qc;
		}
		else {
			semicreix = false;
		}
		prev2 = prev1;
		prev1 = next;
	}
	es_qc = semicreix;
}

int main() {
	
	int n;
	bool es_qc;
	int p_qc; 
	int c_es_qc = 0;
	while (cin >> n and n != 0) {
		info_sequencia(n,es_qc,p_qc);
		if (es_qc) c_es_qc++;
		cout << p_qc << endl;
	}
	cout << "Quasi-creixents: " << c_es_qc++ << endl;
}
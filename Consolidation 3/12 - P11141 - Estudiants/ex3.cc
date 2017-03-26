#include <iostream>
#include <vector>
using namespace std;

struct Estudiant { 
	int dni; 
	string nom; 
	double nota; // La nota és un valor entre 0 i 10, o -1 que representa NP 
	bool repetidor; 
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
	bool first = true;
	bool tots_rep = true;
	int count_mitj = 0;
	double sum=0;
	for (int i=0;i<es.size();i++) {
		if (not es[i].repetidor and es[i].nota != -1) {
			tots_rep = false;
			sum+=es[i].nota;
			count_mitj++;
			if (first) {
				min = es[i].nota;
				max = es[i].nota;
				first = false;
			}
			else {
				if (min > es[i].nota) min = es[i].nota;
				if (max < es[i].nota) max = es[i].nota;
			}
		}
	}
	mitj = sum/count_mitj;
	if (tots_rep) {
		min = -1;
		max = -1;
		mitj = -1;
	}
}

int main() {
	
	vector<Estudiant> es(6);
	double min,max,mitj;
	min = max = mitj = 0;
	
	for (int i=0;i<es.size();i++) {
		cin >> es[i].nota;
		cin >> es[i].repetidor;
	}
	
	informacio(es,min,max,mitj);
	
	cout << "Nota min: " << min << " Nota max: " << max << " Nota mitj: " << mitj << endl; 
}
#include <iostream>
#include <vector>
using namespace std;

struct Provincia { 
	string nom; 
	string capital; 
	int habitants; 
	int area; 
	double pib; 
};

struct Pais { 
	string nom; 
	string capital; 
	vector<Provincia> provs; 
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x) {
	int hab = 0;
	int count;
	for (int i=0;i<p.size();i++) {
		count = 0;
		int habp=0;
		for (int j=0;j<p[i].provs.size();j++) {
			habp+= p[i].provs[j].habitants;
			if (p[i].provs[j].pib <= x) count++;
		}
		if (count>1) hab+=habp;  
	}
	return hab;
}

int main() {
	
}
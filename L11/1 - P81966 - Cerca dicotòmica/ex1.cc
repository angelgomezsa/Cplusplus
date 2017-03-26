#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
	if (esq > dre) return -1;
	int med = (esq+dre)/2;
	if (x > v[med]) posicio(x,v,med+1,dre);
	else if (x < v[med]) posicio(x,v,esq,med-1);
	else return med;
}


int main() {
	double x;
	int esq,dre;
	cin >> x >> esq >> dre;
	vector<double> v = {-5.3, -4.1, -3, -2, -1, 0.1, 1, 2.2, 3, 4, 7, 8, 9};
	cout << posicio(x,v,esq,dre) << endl;
}
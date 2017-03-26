#include <iostream>
using namespace std;

int main () {
	
	int d,m,a;
	
	while (cin >> d >> m >> a) {
		bool es_traspas;
		if (a%4 == 0 and (a%100 != 0 or a%400 == 0)) es_traspas = true;
		else es_traspas = false;
		
		bool es_correcta;
		if (d >= 1 and d <= 31 and m >= 1 and m <= 12) {
			// mesos amb 30 dies
			if ((m == 4 or m == 6 or m == 9 or m == 11) and (d == 31)) es_correcta = false;
			else es_correcta = true;
			// febrer
			if (m == 2) {
				if (d <= 28 or (es_traspas and d == 29)) es_correcta = true;
				else es_correcta = false;
			}
		}
		else es_correcta = false;
		
		if (es_correcta) cout << "Data Correcta" << endl;
		else cout << "Data Incorrecta" << endl;
	}
}

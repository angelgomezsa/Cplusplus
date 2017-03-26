#include <iostream>
using namespace std;

bool es_any_de_traspas(int a) {
	bool traspas;
	if (a%4 == 0 and (a%100 != 0 or a%400 == 0)) traspas = true;
	else traspas = false;
	return traspas;
}


bool es_data_valida(int d, int m, int a) {
	bool valida;
	if (d >= 1 and d <= 31 and m >= 1 and m <= 12) {
		// mesos amb 30 dies
		if ((m == 4 or m == 6 or m == 9 or m == 11) and (d == 31)) valida = false;
		else valida = true;
		// febrer
		if (m == 2) {
			if (d <= 28 or ((es_any_de_traspas(a) and d == 29))) valida = true;
			else valida = false;
		}
	}
	else valida = false;
	return valida;
}		
	

int main () {
	
	int d,m,a;
	cin >> d >> m >> a;
	cout << es_data_valida(d,m,a) << endl;
}	
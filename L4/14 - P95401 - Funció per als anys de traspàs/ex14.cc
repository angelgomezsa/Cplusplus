#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
	bool traspas;
	if (any%4 == 0 and (any%100 != 0 or any%400 == 0)) traspas = true;
	else traspas = false;
	return traspas;
}

int main () {
	
	int any;
	cin >> any;
	
	cout << es_any_de_traspas(any) << endl;
	
}
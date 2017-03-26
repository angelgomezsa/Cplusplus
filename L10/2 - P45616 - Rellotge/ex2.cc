#include <iostream>
using namespace std;

struct Rellotge { 
	int h; // hores (0<=h<24) 
	int m; // minuts (0<=m<60) 
	int s; // segons (0<=s<60) 
};

Rellotge mitja_nit() {
	Rellotge midnight;
	midnight.h = 0;
	midnight.m = 0;
	midnight.s = 0;
	return midnight;
}
 
void incrementa(Rellotge& r) {
	r.s++;
	if (r.s > 59) {
		r.m++;
		r.s = 0;
	}
	if (r.m > 59) {
		r.h++;
		r.m = 0;
	}
	if (r.h > 23) r.h = 0;
} 

void escriu(const Rellotge& r) {
	if (r.h < 10) cout << '0' << r.h << ':';
		else cout << r.h << ':';
	if (r.m < 10) cout << '0' << r.m << ':';
		else cout << r.m << ':';
	if (r.s < 10) cout << '0' << r.s << endl;
		else cout << r.s << endl;
}

int main() {
		
	Rellotge r;
	cin >> r.h;
	cin >> r.m;
	cin >> r.s;
	
	incrementa(r);
	escriu(r);
}
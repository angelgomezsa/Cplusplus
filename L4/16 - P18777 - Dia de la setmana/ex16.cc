#include <iostream>
#include <cmath>
using namespace std;


string dia_de_la_setmana(int d, int m, int a) {
	string dia_string;
	int mp = m-2;
	int ap = a;
	if (mp <= 0) {
		mp = mp+12;
		ap = a-1;
	}
	int c = ap/100;
	int y = ap%100;
	int f = floor(2.6*mp-0.2)+d+y+floor(y/4)+floor(c/4)-(2*c);
	
	int dia = f%7;
	if (dia < 0) dia = dia+7; 
	
	if (dia == 0) dia_string = "diumenge";
	if (dia == 1) dia_string = "dilluns";
	if (dia == 2) dia_string = "dimarts";
	if (dia == 3) dia_string = "dimecres";
	if (dia == 4) dia_string = "dijous";
	if (dia == 5) dia_string = "divendres";
	if (dia == 6) dia_string = "dissabte";
	return dia_string;
}
	
int main () {
	
	int d,m,a;
	while (cin >> d >> m >> a)
		cout << dia_de_la_setmana(d,m,a) << endl;
}
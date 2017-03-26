#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Enviament {
	string dni;
	string exer;
	int temps;
	string res;
};

typedef vector<Enviament> Historia;

bool compara(Enviament e1,Enviament e2) {
	return e1.exer<e2.exer or (e1.exer==e2.exer and e1.dni<e2.dni);
}

int main() {
	int n;
	cin>>n;
	Historia h(n);
	for (int i=0;i<n;i++)
		cin>>h[i].dni>>h[i].exer>>h[i].temps>>h[i].res;
	sort(h.begin(),h.end(),compara);
	int ih=0;
	int maximonumverdes=0;
	string exmaximonumverdes="-";
	int maximonumejerciciosverdes=0;
	string exmaximonumejerciciosverdes="-";
	int maximonumejerciciosrojos=0;
	string exmaximonumejerciciosrojos="-";
	int maximonumintentos=0;
	string exmaximonumintentos="-";
	int maximotiempoenvio=-1;
	string exmaximotiempoenvio="-";
	while (ih<n) {
		string exer=h[ih].exer;
		int numverdes=0;
		int numejerciciosverdes=0;
		int numejerciciosrojos=0;
		int numintentos=0;
		while (ih<n and h[ih].exer==exer) {
			numintentos++;
			string dni=h[ih].dni;
			bool algunverde=false;
			bool algunrojo=false;
			for (int i=ih;i<n and h[ih].exer==exer and h[ih].dni==dni;i++) {
				if (h[ih].res=="vermell") {
					algunrojo=true;
				}
				if (h[ih].temps>maximotiempoenvio) {
					maximotiempoenvio=h[ih].temps;
					exmaximotiempoenvio=exer;
				}
			}
			while (ih<n and h[ih].exer==exer and h[ih].dni==dni) {
				if (h[ih].res=="verd") {
					algunverde=true;
					numverdes++;
				}
				if (algunrojo and (h[ih].res=="verd" or h[ih].res=="groc")) {
					algunrojo = false;
				}
				if (h[ih].temps>maximotiempoenvio) {
					maximotiempoenvio=h[ih].temps;
					exmaximotiempoenvio=exer;
				}
				ih++;
			}
			if (algunverde) numejerciciosverdes++;
			if (algunrojo) numejerciciosrojos++;
		}
		if (numverdes>maximonumverdes) {
			maximonumverdes=numverdes;
			exmaximonumverdes=exer;
		}
		if (numejerciciosverdes>maximonumejerciciosverdes) {
			maximonumejerciciosverdes=numejerciciosverdes;
			exmaximonumejerciciosverdes=exer;
		}
		if (numejerciciosrojos>maximonumejerciciosrojos) {
			maximonumejerciciosrojos=numejerciciosrojos;
			exmaximonumejerciciosrojos=exer;
		}
		if (numintentos>maximonumintentos) {
			maximonumintentos=numintentos;
			exmaximonumintentos=exer;
		}
	}
	if (maximonumverdes>0) 
		cout << "exercici amb mes enviaments verds:     "<<exmaximonumverdes<<" ("<<maximonumverdes<<")"<<endl;
	else cout << "exercici amb mes enviaments verds:     "<<exmaximonumverdes<<endl;
	if (maximonumejerciciosverdes>0)
		cout << "exercici amb mes alumnes verds:        "<<exmaximonumejerciciosverdes<<" ("<<maximonumejerciciosverdes<<")"<<endl;
	else cout << "exercici amb mes alumnes verds:        "<<exmaximonumejerciciosverdes<<endl;
	if (maximonumejerciciosrojos>0)
		cout << "exercici amb mes alumnes vermells:     "<<exmaximonumejerciciosrojos<<" ("<<maximonumejerciciosrojos<<")"<<endl;
	else cout << "exercici amb mes alumnes vermells:     "<<exmaximonumejerciciosrojos<<endl;
	if (maximonumintentos>0)
		cout << "exercici que mes alumnes han intentat: "<<exmaximonumintentos<<" ("<<maximonumintentos<<")"<<endl;
	else cout << "exercici que mes alumnes han intentat: "<<exmaximonumintentos<<endl;
	cout << "exercici de l'ultim enviament:         "<<exmaximotiempoenvio<<endl;
}
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
	return e1.dni<e2.dni or (e1.dni==e2.dni and e1.exer<e2.exer);
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
	string dnimaximonumverdes="-";
	int maximonumejerciciosverdes=0;
	string dnimaximonumejerciciosverdes="-";
	int maximonumejerciciosrojos=0;
	string dnimaximonumejerciciosrojos="-";
	int maximonumejercicios=0;
	string dnimaximonumejercicios="-";
	int maximotiempoenvio=-1;
	string dnimaximotiempoenvio="-";
	while (ih<n) {
		string dni=h[ih].dni;
		int numverdes=0;
		int numejerciciosverdes=0;
		int numejerciciosrojos=0;
		int numejercicios=0;
		while (ih<n and h[ih].dni==dni) {
			numejercicios++;
			string exer=h[ih].exer;
			bool algunverde=false;
			bool algunrojo=false;
			for (int i=ih;i<n and h[ih].dni==dni and h[ih].exer==exer;i++) {
				if (h[ih].res=="vermell") {
					algunrojo=true;
				}
				if (h[ih].temps>maximotiempoenvio) {
					maximotiempoenvio=h[ih].temps;
					dnimaximotiempoenvio=dni;
				}
			}
			while (ih<n and h[ih].dni==dni and h[ih].exer==exer) {
				if (h[ih].res=="verd") {
					algunverde=true;
					numverdes++;
				}
				if (algunrojo and (h[ih].res=="verd" or h[ih].res=="groc")) {
					algunrojo = false;
				}
				if (h[ih].temps>maximotiempoenvio) {
					maximotiempoenvio=h[ih].temps;
					dnimaximotiempoenvio=dni;
				}
				ih++;
			}
			if (algunverde) numejerciciosverdes++;
			if (algunrojo) numejerciciosrojos++;
		}
		if (numverdes>maximonumverdes) {
			maximonumverdes=numverdes;
			dnimaximonumverdes=dni;
		}
		if (numejerciciosverdes>maximonumejerciciosverdes) {
			maximonumejerciciosverdes=numejerciciosverdes;
			dnimaximonumejerciciosverdes=dni;
		}
		if (numejerciciosrojos>maximonumejerciciosrojos) {
			maximonumejerciciosrojos=numejerciciosrojos;
			dnimaximonumejerciciosrojos=dni;
		}
		if (numejercicios>maximonumejercicios) {
			maximonumejercicios=numejercicios;
			dnimaximonumejercicios=dni;
		}
	}
	if (maximonumverdes>0) 
		cout << "alumne amb mes enviaments verds:     "<<dnimaximonumverdes<<" ("<<maximonumverdes<<")"<<endl;
	else cout << "alumne amb mes enviaments verds:     "<<dnimaximonumverdes<<endl;
	if (maximonumejerciciosverdes>0)
		cout << "alumne amb mes exercicis verds:      "<<dnimaximonumejerciciosverdes<<" ("<<maximonumejerciciosverdes<<")"<<endl;
	else cout << "alumne amb mes exercicis verds:      "<<dnimaximonumejerciciosverdes<<endl;
	if (maximonumejerciciosrojos>0)
		cout << "alumne amb mes exercicis vermells:   "<<dnimaximonumejerciciosrojos<<" ("<<maximonumejerciciosrojos<<")"<<endl;
	else cout << "alumne amb mes exercicis vermells:   "<<dnimaximonumejerciciosrojos<<endl;
	if (maximonumejercicios>0)
		cout<<"alumne amb mes exercicis intentats:  "<<dnimaximonumejercicios<<" ("<<maximonumejercicios<<")"<<endl;
	else cout << "alumne amb mes exercicis intentats:  "<<dnimaximonumejercicios<<endl;
	cout<<"alumne que ha fet l'ultim enviament: "<<dnimaximotiempoenvio<<endl;
}
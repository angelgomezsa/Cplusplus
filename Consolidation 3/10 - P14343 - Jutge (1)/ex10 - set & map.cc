#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

void actualitza(int &maxim,string &dni,int nouvalor,string noudni) {
	if (nouvalor>maxim) {
		maxim=nouvalor;
		dni=noudni;
	}
}

struct Enviament {
	string dni;
	string exer;
	int temps;
	string res;
};

bool compara(Enviament e1,Enviament e2) {
	return e1.temps<e2.temps;
}

typedef vector<Enviament> Historia;

int main() {
	int n;
	cin>>n;
	Historia h(n);
	for (int i=0;i<n;i++)
		cin>>h[i].dni>>h[i].exer>>h[i].temps>>h[i].res;
	sort(h.begin(),h.end(),compara);
	map<string,set<string> > e;
	map<string,int> ev;
	map<string,set<string> > cv;
	map<string,set<string> > cr;
	for (int i=0;i<n;i++)
		if (h[i].res=="vermell")
		cr[h[i].dni].insert(h[i].exer);
	for (int i=0;i<n;i++) {
		e[h[i].dni].insert(h[i].exer);
		if (h[i].res=="verd") {
			ev[h[i].dni]++;
			cv[h[i].dni].insert(h[i].exer);
		}
		if (h[i].res=="verd" or h[i].res=="groc") cr[h[i].dni].erase(h[i].exer);
	}
	string dnie,dniev,dnicv,dnicr;
	int maxime=0,maximev=0,maximcv=0,maximcr=0;
	for (map<string,set<string> >::iterator it=e.begin();it!=e.end();it++) {
		string dni=it->first;
		int acte=int(e[dni].size());
		int actev=ev[dni];
		int actcv=int(cv[dni].size());
		int actcr=int(cr[dni].size());
		actualitza(maxime,dnie,acte,dni);
		actualitza(maximev,dniev,actev,dni);
		actualitza(maximcv,dnicv,actcv,dni);
		actualitza(maximcr,dnicr,actcr,dni);
	}
	if (maximev>0) {
		cout<<"alumne amb mes enviaments verds:     "<<dniev<<" ("<<maximev<<")"<<endl;
		cout<<"alumne amb mes exercicis verds:      "<<dnicv<<" ("<<maximcv<<")"<<endl;
	} else {
		cout<<"alumne amb mes enviaments verds:     -"<<endl;
		cout<<"alumne amb mes exercicis verds:      -"<<endl;
	}
	if (maximcr>0)
		cout<<"alumne amb mes exercicis vermells:   "<<dnicr<<" ("<<maximcr<<")"<<endl;
	else
		cout<<"alumne amb mes exercicis vermells:   -"<<endl;
	if (maxime>0) {
		cout<<"alumne amb mes exercicis intentats:  "<<dnie<<" ("<<maxime<<")"<<endl;
		cout<<"alumne que ha fet l'ultim enviament: "<<h.back().dni<<endl;
	} else {
		cout<<"alumne amb mes exercicis intentats:  -"<<endl;
		cout<<"alumne que ha fet l'ultim enviament: -"<<endl;
	}
}

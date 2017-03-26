#include <iostream>
#include <vector>
using namespace std;

struct Parell { 
	int valor; // Diferent de zero 
	int pos; // Mes gran o igual que zero 
};

typedef vector<Parell> Vec_Com; // Ordenat per pos!

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2) {
	Vec_Com s;
	int i=0;
	int j=0;
	while (i<v1.size() and j<v2.size()) {
		if (v1[i].pos > v2[j].pos) {
			s.push_back(v2[j]);
			j++;
		}
		else if (v1[i].pos < v2[j].pos) {
			s.push_back(v1[i]);
			i++;
		}
		else {
			if (v1[i].valor+v2[j].valor != 0) {
				Parell p;
				p.valor = v1[i].valor+v2[j].valor;
				p.pos = v1[i].pos;
				s.push_back(p);
			}
			i++; j++;
		}
	}
	while (i<v1.size()) {
		s.push_back(v1[i]);
		i++;
	}
	while (j<v2.size()) {
		s.push_back(v2[j]);
		j++;
	}
	return s;
}

void llegeix(Vec_Com& v) {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		string elem;
		cin >> elem;
		int j=0;
		bool neg = false;
		if (elem[0]=='-') {
			neg = true;
			j++;
		}
		int valor=0;
		for (j;elem[j]!=';';j++) 
			valor=valor*10+int(elem[j]-'0');
		
		if (neg) valor=-valor;
		j++;
		int pos=0;
		for (j;j<elem.size();j++) 
			pos=pos*10+int(elem[j]-'0');
		
		Parell p;
		p.valor=valor;
		p.pos=pos;
		v.push_back(p);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		Vec_Com v1;
		llegeix(v1);
		Vec_Com v2;
		llegeix(v2);
		Vec_Com res = suma(v1,v2);
		cout << res.size();
		for(int k=0;k<res.size();k++) {
			cout << ' ' << res[k].valor << ";" << res[k].pos;
		}
		cout << endl;
	}
}
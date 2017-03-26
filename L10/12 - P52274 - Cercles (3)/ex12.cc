#include <iostream>
#include <cmath>
using namespace std;

struct Punt { 
	double x, y; 
};

struct Cercle { 
	Punt centre; 
	double radi; 
};

void llegeixp(Punt& p) {
	cin >> p.x;
	cin >> p.y;
}

void llegeixc(Cercle& c) {
	cin >> c.centre.x;
	cin >> c.centre.y;
	cin >> c.radi;
}

double distancia(const Cercle& c1, const Cercle& c2) {
	return sqrt((c1.centre.x-c2.centre.x)*(c1.centre.x-c2.centre.x) + (c1.centre.y-c2.centre.y)*(c1.centre.y-c2.centre.y));
}

int relacio(const Cercle& c1, const Cercle& c2) {
	int dist = distancia(c1,c2);
	if (dist + c1.radi < c2.radi) return 1;
	else if (dist + c2.radi < c1.radi) return 2;
	else if (c2.radi + c1.radi > dist) return 3;
	else return 0;
}

void escala(Cercle& c, double esc) {
	c.radi*=esc;
}

void desplaca(Cercle& c, const Punt& p) {
	c.centre.x+=p.x;
	c.centre.y+=p.y;
}

int main() {
	Cercle c1;
	llegeixc(c1);
	Cercle c2;
	llegeixc(c2);
	int n;
	string ord;
	
	int rel = relacio(c1,c2);
	if (rel == 1) cout << "el primer cercle es interior al segon" << endl;
	else if (rel == 2) cout << "el segon cercle es interior al primer" << endl;
	else if (rel == 3) cout << "els cercles intersecten" << endl;
	else cout << "els cercles no intersecten" << endl;
		
	while (cin >> n >> ord) {
		if (n == 1) {
			if (ord == "escala") {
				double esc;
				cin >> esc;
				escala(c1,esc);
			}
			if (ord == "mou") {
				Punt p;
				llegeixp(p);
				desplaca(c1,p);
			}
		}
		else {
			if (ord == "escala") {
				double esc;
				cin >> esc;
				escala(c2,esc);
			}
			if (ord == "mou") {
				Punt p;
				llegeixp(p);
				desplaca(c2,p);
			}
		}
		int rel = relacio(c1,c2);
		if (rel == 1) cout << "el primer cercle es interior al segon" << endl;
		else if (rel == 2) cout << "el segon cercle es interior al primer" << endl;
		else if (rel == 3) cout << "els cercles intersecten" << endl;
		else cout << "els cercles no intersecten" << endl;
	} 
	
}
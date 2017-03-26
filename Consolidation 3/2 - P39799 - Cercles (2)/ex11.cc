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

double distancia(const Punt& a, const Cercle& c) {
	return sqrt((a.x-c.centre.x)*(a.x-c.centre.x) + (a.y-c.centre.y)*(a.y-c.centre.y));
}

void desp(Punt& a, Punt &b) {
	a.x+=b.x;
	a.y+=b.y;
}



int main() {
	Cercle c;
	llegeixc(c);

	Punt a;
	llegeixp(a);
	
	bool out = false;
	bool in = false;
	if (distancia(a,c) < c.radi) {
		cout << "inicialment a dins" << endl;
		in = true;
	}
	else {
		cout << "inicialment a fora" << endl;
		out = true;
	}

	int n;
	cin >> n;

	for (int i=1;i<=n;i++) {
		Punt b;
		llegeixp(b);
		desp(a,b);
		if (distancia(a,c) > c.radi) {
			if (in) {
				cout << "al pas " << i << " ha sortit a fora" << endl;
				in = false;
				out = true;
			}
		}
		else {
			if (out) {
				cout << "al pas " << i << " ha entrat a dins" << endl;
				out = false;
				in = true;
			}
		}
	}
}
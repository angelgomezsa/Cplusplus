#include <iostream>
#include <cmath>
using namespace std;

struct Punt { 
	double x, y; 
};

void desplaca(Punt& p1, const Punt& p2) {
	p1.x += p2.x;
	p1.y += p2.y; 
}

struct Cercle { 
	Punt centre; 
	double radi; 
};

void escala(Cercle& c, double esc) {
	c.radi*=esc;
}

void desplaca(Cercle& c, const Punt& p) {
	c.centre.x+=p.x;
	c.centre.y+=p.y;
}

double distancia(const Punt& p, const Cercle& c) {
	return sqrt((p.x-c.centre.x)*(p.x-c.centre.x) + (p.y-c.centre.y)*(p.y-c.centre.y));
}

bool es_interior(const Punt& p, const Cercle& c) {
	return distancia(p,c) < c.radi;
}

int main() {
	
}
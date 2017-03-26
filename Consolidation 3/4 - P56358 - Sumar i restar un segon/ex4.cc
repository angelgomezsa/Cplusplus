#include <iostream>
using namespace std;

struct Temps { 
	int hora, minut, segon; 
};

Temps clock(int hores, int minuts, int segons) {
	Temps t;
	t.hora = hores;
	t.minut = minuts;
	t.segon = segons;
	return t;
}

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
	t1.segon++;
	if (t1.segon > 59) {
		t1.minut++;
		t1.segon = 0;
		if (t1.minut > 59) {
			t1.hora++;
			t1.minut = 0;
			if (t1.hora > 23) t1.hora = 0;
		}
	}
	t2.segon--;
	if (t2.segon < 0) {
		t2.minut--;
		t2.segon = 59;
		if (t2.minut < 0) {
			t2.hora--;
			t2.minut = 59;
			if (t2.hora < 0) t2.hora = 23;
		}
	}
}

int main() {
	
	Temps t;
	while (cin >> t.hora >> t.minut >> t.segon) {
		Temps t1 = clock(t.hora, t.minut, t.segon);
		Temps t2 = clock(t.hora, t.minut, t.segon);
		un_segon(t,t1,t2);
		cout << t1.hora << ' ' << t1.minut << ' ' << t1.segon << endl;
		cout << t2.hora << ' ' << t2.minut << ' ' << t2.segon << endl;
	}
}
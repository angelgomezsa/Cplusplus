#include <iostream>
#include <vector>
using namespace std;

struct point2d {
     int x, y;
};

// retorna quants punts donats en el vector v queden per
// sobre de la recta y = ax + b
int above_line(const vector<point2d>& v, int a, int b) {
    int count = 0;
	for (int i = 0;i<v.size();i++) {
		if (v[i].y > a*v[i].x+b) count++;
	}
	return count;
}

// llegeix n punts des del cin (n parells xi, yi) i els 
// retorna en un vector<point2d>
vector<point2d> read_points(int n) {
    vector<point2d> v(n);
	for (int i=0;i<n;i++) {
		cin >> v[i].x >> v[i].y;
	}
	return v;
}


int main() {
    int n;
    while (cin >> n) {
        vector<point2d> v = read_points(n);
        int a, b;
        cin >> a >> b;
        cout << above_line(v, a, b); 
        cout << " points lie above ";
        cout << "the line  y = " << a << "x" ;
        if (b>0) cout << " + " << b << endl;
        else if (b<0) cout << " - " << -b << endl;
        else cout << endl;
   }
}
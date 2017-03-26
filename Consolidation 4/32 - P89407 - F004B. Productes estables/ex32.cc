#include <iostream>
#include <vector>
using namespace std;

void escriudigit(int d) {
  if (d<10) cout << d;
  else cout << char('A'+d-10);
}

void escriu(int n, int b) {
  if (n >= b) escriu(n/b,b);
  escriudigit(n%b);
}

bool mateixos_digits(int x, int y, int b) {
	vector<int> numbers (10,0);
	vector<int> letters ('F'-'A'+1,0);
	int z=x*y;
	while (x>0) {
		if (x%b < 10) numbers[x%b]++;
		else letters[x%b-10]++;
		x/=b;
	}
	while (y>0) {
		if (y%b < 10) numbers[y%b]++;
		else letters[y%b-10]++;
		y/=b;
	}
	while (z>0) {
		if (z%b < 10) numbers[z%b]--;
		else letters[z%b-10]--;
		z/=b;
	}
	for (int i=0;i<10;i++)
		if (numbers[i]!=0) return false;
	
	for (int i=0;i<letters.size();i++)
		if (letters[i]!=0) return false;
	return true;
}

int main () {
	int x,y;
	while (cin >>x>>y) {
		cout << "solucions per a " << x <<" i "<< y << endl;
		bool hiha_sol = false;
		for (int b=2;b<17;b++) {
			if (mateixos_digits(x,y,b)) {
				escriu(x,b);
				cout << " * ";
				escriu(y,b);
				cout << " = ";
				escriu(x*y,b);
				cout << " (base " << b << ")" << endl;
				hiha_sol = true;
			}
		}
		if (not hiha_sol) cout << "cap" << endl;
		cout<<endl;
	}
}
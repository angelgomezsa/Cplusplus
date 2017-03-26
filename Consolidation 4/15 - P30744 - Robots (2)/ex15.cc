#include <iostream>
#include <vector>
using namespace std;

bool valid_pos(vector<vector<bool> > &v, int n, int m, int &y, int &x, string &order) {
	if (order == "dreta") {
		x++; 
		if (x<1 or x>m) {
			cout << "fora de limits" << endl;
			return false;
		}
		if (v[y][x]==1) {
			cout << "posicio repetida" << endl;
			return false;
		}
		v[y][x]=1;
		return true;
	} 
	else if (order == "esquerra") {
		x--;
		if (x<1 or x>m) {
			cout << "fora de limits" << endl;
			return false;
		}
		if (v[y][x]==1) {
			cout << "posicio repetida" << endl;
			return false;
		}
		v[y][x]=1;
		return true;
	} 
	else if (order == "amunt") {
		y--;
		if (y<1 or y>n) {
			cout << "fora de limits" << endl;
			return false;
		}
		if (v[y][x]==1) {
			cout << "posicio repetida" << endl;
			return false;
		}
		v[y][x]=1;
		return true;
	} 
	else if (order == "avall") {
		y++;
		if (y<1 or y>n) {
			cout << "fora de limits" << endl;
			return false;
		}
		if (v[y][x]==1) {
			cout << "posicio repetida" << endl;
			return false;
		}
		v[y][x]=1;
		return true;
	} 
	else {
		cout << "ordre incorrecta" << endl;
		return false;
	}
}

int main() {
	int n,m;
	cin >> n >> m;
	vector<vector<bool> > v (n+1,vector<bool>(m+1,0));
	int y,x;
	cin >> y >> x;
	v[y][x] = 1;
	cout << '(' << y << ", " << x << ')' << endl;
	string order;
	while (cin >> order and valid_pos(v,n,m,y,x,order)) {
		cout << '(' << y << ", " << x << ')' << endl;
	}
}
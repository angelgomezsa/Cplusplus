#include <iostream>
#include <string>
#include <vector>
using namespace std;

string suma(string x, string y) {
	int lenx=x.length()-1;
	int leny=y.length()-1;
	string z(lenx+2,'0');
	int i=0;
	while (i<=leny) {
		char sx=x[lenx-i], sy=y[leny-i], sz=z[lenx+1-i];
		int sum = int(sx-'0')+int(sy-'0')+int(sz-'0');
		if (sum < 10) z[lenx+1-i]=char(sum+'0');
		else {
			z[lenx+1-i]=char(sum%10+'0');
			z[lenx+1-(i+1)]=char(sum/10%10+'0');
		}
		i++;		
	}
	while (i<=lenx) {
		char sx=x[lenx-i], sz=z[lenx+1-i];
		int sum = int(sx-'0')+int(sz-'0');
		if (sum < 10) z[lenx+1-i]=char(sum+'0');
		else {
			z[lenx+1-i]=char(sum%10+'0');
			z[lenx+1-(i+1)]=char(sum/10%10+'0');
		}
		i++;		
	}
	return z;
}

int main() { 
	string x, y; 
	while (cin >> x >> y) 
		cout << suma(x, y) << endl; 
}
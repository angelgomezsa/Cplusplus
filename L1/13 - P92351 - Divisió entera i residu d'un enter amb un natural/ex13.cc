#include <iostream>
using namespace std;

int main() {
 
	int a,b,q,r;
	cin >> a >> b;
  
	if (a < 0 and a%b != 0) {
		q = (a/b)-1;
		r = a%b+b;
	}
	else {
		q = a/b;
		r = a%b;
	}

//	cout << "Quocient :" << q << " Residu: " << r << endl;
    cout << q << " " << r << endl;
}
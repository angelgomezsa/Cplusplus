#include <iostream>
using namespace std;

int main () {
	
	char x;
	cin >> x;
	
	if (x >= 'a' and x <= 'z') cout << "Lletra minuscula" << endl;
	if (x >= '0' and x <= '9') cout << "Numero" << endl;
	if (x >= 'A' and x <= 'Z') cout << "Lletra majuscula" << endl;
}


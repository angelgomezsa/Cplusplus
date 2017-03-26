#include <iostream>
using namespace std;

int main () {
	
	int a,b;
	cin >> a >> b;
	
	if (a <= b){
		for (a;a<b;a++)
			cout << a <<",";
		if (a=b) cout << a << endl;
	}
	else cout << endl;
}
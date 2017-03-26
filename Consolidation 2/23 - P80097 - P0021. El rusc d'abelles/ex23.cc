#include <iostream>
using namespace std;

void pinta_rusc(int f, int c) {
	cout << " _";
	for (int i=0;i<c-1;i++)
		cout << "   _";
	cout<<endl;
	
	for (int i=0;i<f*2;i++) {
		if (i%2 == 0) {
			cout<<"/ \\";
			for (int j=0;j<c-1;j++) 
				cout<<"_/ \\";
			cout << endl;
		}
		else {
			cout<<"\\_/";
			for (int j=0;j<c-1;j++)
				cout << " \\_/";
			cout<<endl;
		}
	}
}

int main() {
	
	int f,c;
	bool first = true;
	while (cin >> f >> c) {
		if (first) first = false;
		else cout << endl;
		pinta_rusc(f,c);
	}
}
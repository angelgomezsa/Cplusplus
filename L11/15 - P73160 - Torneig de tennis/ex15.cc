#include <iostream>
#include <vector>
using namespace std;

string guanyador(const vector<string>& nom, const vector<bool>& guanya) {
	int mida=guanya.size();
	int pos=0;
	while (pos<mida) {
		if (guanya[pos]) pos=pos*2+1;
		else pos=pos*2+2;
	}
	return nom[pos-mida];
}

int main() {
 
}

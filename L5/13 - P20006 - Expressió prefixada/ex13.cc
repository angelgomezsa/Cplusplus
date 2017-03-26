#include <iostream>
using namespace std;

int avalua() {
	char c;	
	cin >> c;
	if (c>='0' and c<='9') return c-'0';
	int e1=avalua();
	int e2=avalua();
	if (c=='*') return e1*e2;
	if (c=='+') return e1+e2;
	else return e1-e2;
}


int main() {
	
	cout <<avalua()<< endl;
}
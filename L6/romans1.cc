#include <iostream>
#include <string>
using namespace std;

string dtor(int d, string I, string V, string X) {
	string s;
	if (d==0);
	if (d<=3) for (int i=0; i<d; i++) s+=I;
	else if (d==4) s=I+V;
	else if (d<=8) { 
		s=V;
		for (int i=6; i<=d;i++) s+=I;
	}
	else s=I+X;
	return s;
}

string itor(int x) {
	return dtor(x/1000%10,"M","","")+
		   dtor(x/100%10,"C","D","M")+  
		   dtor(x/10%10,"X","L","C")+
		   dtor(x%10,"I","V","X");
}

int main () {
	int x;
	while (cin >> x) {
		cout << x << " = " << itor(x) << endl;
	}
}
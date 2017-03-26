#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	for (int s=n-1,a=0;s>=0;s--,a++) 
		cout << string(s,'+') << '/' << string(a,'*') << endl;	
}
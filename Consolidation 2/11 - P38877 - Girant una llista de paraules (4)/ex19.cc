#include <iostream>
#include <string>
using namespace std;

int escriu(int n) {
	string s;
	if (cin>>s) {
		int c=escriu(n);
		if (c<n) {
			cout<<s<<endl;
			c++;
		}
		return c;
	}
    return 0;
}

int main() {
	
	int n;
	cin>>n;
	
	escriu(n);
}
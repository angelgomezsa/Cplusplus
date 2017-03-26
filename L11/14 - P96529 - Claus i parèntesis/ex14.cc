#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool benparentitzat(string &s) {
	vector<int> v;
	for (int i=0;i<int(s.size());i++) {
		if (int(v.size())>0 and ((v.back()=='(' and s[i]==')') or (v.back()=='[' and s[i]==']')))
			v.pop_back();
		else v.push_back(s[i]);
	}
	return int(v.size())==0;
}


int main() {
	string s;
	while (cin>>s) {
		if (benparentitzat(s)) cout << "si" << endl;
		else cout << "no"<< endl;
	}
}
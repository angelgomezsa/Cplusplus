#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool conte(string s1, string s2) {
	int len1 = s1.length()-1;
	int len2 = s2.length()-1;
	for (int i=0;i+len2<=len1;i++) {
		bool contains = true;
		for (int j=0,k=i;j<=len2 and contains;j++,k++) {
			contains = (s1[k] == s2[j]);
		}
		if (contains) return true;
	}
	return false;
} 

int main() { 
	int n; 
	cin >> n;
	vector<string> p(n);
	for (int i=0;i<n;++i) 
		cin >> p[i];
	
	for (int i=0;i<n;++i) {
		cout << p[i] << ':';
		for (int j=0;j<n;j++) { 
			if (conte(p[i],p[j])) cout << ' ' << p[j];
		}
		cout << endl;
	}
}
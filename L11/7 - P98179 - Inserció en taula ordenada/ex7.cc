#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v) {
	for (int i=v.size()-1;i>0 and v[i-1] > v[i];i--) 
		swap(v[i],v[i-1]);
}

int main() {
	vector<double> v = {-5.3, -4.1, -3, -2, -1, 0, 1, 2.2, 3, 4, 7, 8.3, 5};
	insereix(v);
	
	for (int i=0;i<v.size();i++) {
		if (i!=0) cout << " | ";
		cout << v[i];
	}
}
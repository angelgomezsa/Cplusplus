#include <iostream>
#include <vector>
using namespace std;

void ordena_per_bombolla(vector<double>& v) {
	bool sorted = false;
	int last = v.size()-1;
	while (not sorted) {
		sorted = true;
		for (int i=1; i<=last;i++) {
			if (v[i-1] > v[i]) {
				swap(v[i-1],v[i]);
				sorted = false;
			}
		}
		last--;
	}
}

int main() {
	vector<double> v = {5.3, -4.1, 3, -2, 3, 5, 1, 2.2, 3, 4, 8, 7, 6};
	ordena_per_bombolla(v);
	for (int i=0;i<v.size();i++) 
		cout << v[i] << ' ';
}
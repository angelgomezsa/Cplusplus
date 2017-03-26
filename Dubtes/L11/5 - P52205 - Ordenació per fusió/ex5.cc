#include <iostream>
#include <vector>
using namespace std;

void merge(vector<double>& v, const vector<double>& left, const vector<double>& right) {
	int i=0,j=0; // i = left iterator, j = right iterator
	while (i < left.size() and j < right.size()) {
		if (left[i] < right[j]) {
			v[i+j] = left[i];
			i++;
		}
		else {
			v[i+j] = right[j];
			j++;
		}
	}
	while (i < left.size()) {
		v[i+j] = left[i];
		i++;
	}
	while (j<right.size()) {
		v[i+j] = right[j];
		j++;
	}
}


void ordena_per_fusio(vector<double>& v) {
	if (v.size() <= 1) return;
	vector<double>::iterator middle = v.begin() + (v.size()/2);
	vector<double> left(v.begin(), middle);
	vector<double> right(middle, v.end());
	ordena_per_fusio(left);
	ordena_per_fusio(right);
	merge(v,left,right);
}

int main() {
	vector<double> v = {5.3, -4.1, 3, -2, 3, 5, 1, 2.2, 3, 4, 7, -8.3, 9};
	ordena_per_fusio(v);

	for (int i=0;i<v.size();i++) {
		if (i!=0) cout << " | ";
		cout << v[i];
	}
}
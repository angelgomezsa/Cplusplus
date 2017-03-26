#include <iostream>
#include <vector>
using namespace std;

int common(vector<int>& v1, vector<int>& v2) {
	int cmn,i,j;
	i = j = cmn = 0;
	while (i < v1.size() and j < v1.size()) {
		if (v1[i] < v2[j]) i++;
		else if (v1[i] > v2[j]) j++;
		else {
			i++;
			j++;
			cmn++;
		}
	}
		return cmn;
}

int main() {
	
	vector<int> v1(11);
	vector<int> v2(11);
	
	cout << "Enter the 11 elements of he first vector" << endl;
	for (int i=0;i<11;i++) 
		cin >> v1[i];
	
	cout << "Enter the 11 elements of he second vector" << endl;
	
	for (int i=0;i<11;i++) 
		cin >> v2[i];

	cout << common(v1,v2) << endl;

	
}
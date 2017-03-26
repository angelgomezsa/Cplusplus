#include <iostream>
#include <vector>
using namespace std;

vector<int> diff(vector<int>& A, vector<int>& B) {
	vector<int> C;
	int i=0,j=0;
	while (i<A.size and j<B.size()) {
		if (A[i]<B[j]) {
			C.push_back(A[i]);
			i++;
		}
		else if (A[i]>B[j]) j++;
		else {
			i++;
			j++;
		}
	}
	while (i<.Asize()) {
		C.push_back(A[i]);
		i++;
	}
	return C;
}
	
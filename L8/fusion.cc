#include <iostream>
#include <vector>
using namespace std;

vector<int> fusion(vector<int>& A, vector<int>& B) {
	vector<int> C;
	int i=0,j=0;
	// while there's elements in both vectors
	// pushback the smallest one
	while (i < A.size() and j < B.size()) {
		if (A.[i] <= B[j]) {
			C.push_back(A[i]);
			i++;
		}
		else (A.[i] > B[j]) {
			C.push_back(B[i]);
			j++;
		}
	}
	// if there's still elements left in one of the vectors
	// push back the rest
	while (i < A.size()) {
		C.push_back(A[i]);
		i++;
	}
	while (j < B.size()) {
		C.push_back(B[i]);
		j++;
	}
	return C;
}
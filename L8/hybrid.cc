#include <iostream>
#include <vector>
#include <string>
using namespace std;

// An animal can be hybrid if the last two letters of the first
// are the same as the two first letters of the second
// ex 1: camel 2: elephant  -  results in camelephant
// An animal can't form a hybrid with itself

void hybrid(vector<int>& A) {
	// 'i' indicates the first animal
	// 'j' indicates the second animal
	for (int i=0;i<A.size();i++) {
		for (int j=0;j<A.size();j++) {
			if (i !=j and there_is_hybrid(A[i],A[j]) 
				cout << hybrid(A[i].A[j]) << endl;
		}
	}
}

bool there_is_hybrid(string s1,string s2) {
	int ls1=s1.lenght;
	int ls2=s2.lenght;
	if (ls1 < 2 or ls2 < 2) return false;
	// if the second to last and last letters from the first animal
	// are the same as the first and second letters of the second animal
	// return true, else false
	else return (s1[ls1-2] == s2[0] and s1[ls1-1] == s2[1]);
}

string hybrid(string s1, string s2) {
	// pushback all the letters of the second animal
	// starting from the third one
	// as the frirst two are the same as the last two from the first animal
	for (int i=2;i<s2.lenght;i++)
		s1.push_back(s2[i]);
	return s1;
}




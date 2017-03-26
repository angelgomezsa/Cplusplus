#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main() {
	// declares vector v with 1001 positions 
	// and a 0 in every one of them
	vi v(1001, 0);
	int n;
	cin >> n;
	for (int i=0;i<n;++i) {
		// read a sequence of n elements
	     int aux;
	     cin >> aux;
		 // increase by 1 the position designated by aux 
	     ++v[aux - 1000000000];
	}
	// if 'i' position was seen (and thus, that position has at least a 1)
	// print how many times that position was seen
	for (int i=0;i<1001;++i){
	    if (v[i] != 0) cout << 1000000000 + i << " : " << v[i] << endl; 
	}
}

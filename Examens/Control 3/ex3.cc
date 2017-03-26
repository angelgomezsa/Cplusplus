#include <iostream>
using namespace std;

// Add here other function definitions if you need them.

// Read problem statement.
int count_initial_arches() {
	int prev;
	cin >> prev;
	if (prev!=0) return 0;
	int next;
	bool es_arc=true;
	int arcs=0;
	while (cin >> next and es_arc) {
		if (next >=0 and next >= prev-1 and next <= prev+1) {
			if (next==0) arcs++;
			prev=next;
		}
		else es_arc=false;
	}
	return arcs;
}

int main() {
  cout<<count_initial_arches()<<endl;
}
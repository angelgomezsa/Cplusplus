#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux) {
	if (n == 0) return;
	hanoi(n-1,from,aux,to);
	cout << from << " => " << to << endl;
	hanoi(n-1,aux,to,from);
}

int main() {
	
	int ndisks;
	cin >> ndisks;
	
	hanoi(ndisks,'A','C','B');
}
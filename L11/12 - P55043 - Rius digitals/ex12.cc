#include <iostream>
using namespace std;

int riu(int m) {
	int sum=m;  
	while (m > 0) {
		sum+=m%10;
		m/=10;
	}
	return sum;
}

int trobada_de_rius(int n) {
	int riu1=1,riu3=3,riu9=9;
	while (true) {
		while (riu1 < n) riu1 = riu(riu1);
			if (riu1 == n) return riu1;
		while (riu3 < n) riu3 = riu(riu3);
			if (riu3 == n) return riu3;
		while (riu9 < n) riu9 = riu(riu9);
			if (riu9 == n) return riu9;  
		n = riu(n);
	}
}

int main() {
	int n;
	cin >> n;
	cout << trobada_de_rius(n) << endl;
}
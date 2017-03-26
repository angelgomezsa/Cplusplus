#include <iostream>
#include <vector>
using namespace std;

// reads and returns the contents of a vector of n reals from cin, n > 0
vector<int> read_vector(int n) {
     vector<int> v(n);
     for (int i = 0; i < n; ++i) 
         cin >> v[i];
     return v;
}

// add here functions or procedures if you need them

// see the stament of the problem
void print_average_of_segments(const vector<int>& v, int k) {
    double sum=0;
	for (int i=0;i<k;i++) 
		sum+=v[i];
	cout << sum/k;
	for (int i=1;i+k<=int(v.size());i++) {
		sum=sum-v[i-1]+v[i+k-1];
		cout << ' ' << sum/k;
	}
	cout << endl;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n,k;
    while (cin >> n >> k) {
        vector<int> v = read_vector(n);
        print_average_of_segments(v,k);
    }
} 
#include <iostream>
#include <vector>
using namespace std;

const int limit = 1000001;

int main() {
  vector<bool> esprimer(limit,true);
  esprimer[0]=esprimer[1] = false;
  for (int i=2;i<limit;i++) 
    if (esprimer[i]) 
      for (int j=i+i;j<limit;j+=i) 
	esprimer[j]=false;

  // Pre: x >= 0
  int x;
  while (cin >> x) {
    if (esprimer[x]) cout << x << " es primer" << endl;
    else cout << x << " no es primer" << endl;
  }
}
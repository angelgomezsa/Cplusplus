#include <iostream>
using namespace std;

int main() {
 
  int x;
  cin >> x;
 
  if (x%100 == 0) {
	if ((x/100)%4 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
   }
  else if (x%4 == 0) cout << "YES" << endl;
     else cout << "NO" << endl;

}
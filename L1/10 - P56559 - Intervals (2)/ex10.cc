#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int a1,b1,a2,b2;
  cin >> a1 >> b1 >> a2 >> b2;
  
  int interval1 = max(a1,a2);
  int interval2 = min(b1,b2);
 
  if (interval1 == a1 and interval2 == b1 and interval1 == a2 and interval2 == b2) cout << "=" << endl;
  else if (interval1 == a1 and interval2 == b1) cout << "1" << endl;
  else if (interval1 == a2 and interval2 == b2) cout << "2" << endl;
  else cout << "?" << endl;
 
}
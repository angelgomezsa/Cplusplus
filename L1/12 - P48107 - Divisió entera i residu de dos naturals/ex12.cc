#include <iostream>
using namespace std;

int main() {
 
  int a,b,d,r;
  cin>>a>>b;
  
  d = a/b;
  if (d < 0) d = d-1;
  r = a - b*d;
 
  cout << d <<" " << r << endl;
  
}
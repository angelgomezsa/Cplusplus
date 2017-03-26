#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int a1,b1,a2,b2;
  cin >> a1 >> b1 >> a2 >> b2;
  
  int interval1 = max(a1,a2);
  int interval2 = min(b1,b2);
 
  if (interval1>interval2) cout << "[]" << endl;
    else  cout <<"["<<interval1<<","<< interval2<<"]"<<endl;
    
}
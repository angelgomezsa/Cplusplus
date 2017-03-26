#include <iostream>
#include <cmath>
using namespace std;

int main()  {

  cout.setf(ios::fixed); 
  cout.precision(4);
  
  double i;
  string t;
  
  cin >> i >> t;
  
  i = i/100.0;
  
  int p;
  if (t == "semestral") p = 2;
  if (t == "trimestral") p = 4;
  if (t == "mensual") p = 12;
  if (t == "setmanal") p = 52;
  
  i = (pow( 1+i/p , p) - 1) * 100;
  
  cout << i << endl;
  
}
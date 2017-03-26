#include <iostream>
#include <cmath>
using namespace std;

int main()  {

  cout.setf(ios::fixed); 
  cout.precision(4);
  
  double c,i,t;
  string type;
  
  cin >> c >> i >> t >> type;
  
  i = i/100.0;
  
  double cf;
  if (type == "simple") cf = c+c*i*t;
  if (type == "compost") cf = c*(pow((1+i),t));
	  
  cout << cf << endl;
  
}
#include <iostream>
using namespace std;

int main() {
 
  int s;
  cin>>s;
  int m =s/60;
  int sp=s%60; 
  int h=m/60;
  int mp=m%60;
  cout << h <<" "<< mp << " " << sp<< endl;
  
}
#include <iostream>
using namespace std;

int main() {
 
  int h,m,s;
  cin>>h>>m>>s;
  
  s = s+1;  
  m = m + s/60;
  int sp = s%60; 
  h = h + m/60;
  int mp = m%60;
  int hp = h%24;
  
  if (hp < 10) cout << "0" << hp;
    else cout << hp;
	
  cout <<":";
  
  if (mp < 10) cout << "0" << mp;
    else cout << mp;
	
  cout <<":";
  
  if (sp < 10) cout << "0" << sp << endl;
    else cout << sp << endl;
	 
}
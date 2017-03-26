#include <iostream>
#include <string>
using namespace std;

bool llegir(char &c) {
  if (not (cin >> c)) return false;
  if (c!='.') cout << c;
  return true;
}


int rtod(char &c, char I, char V, char X) {
  int d = 0;
  if (c == I) { 
    while (c==I) {
      d++;
      llegir(c);
    }
    if (c==V) {
      d=4;
      llegir(c);
    } else if (c == X) {
      d=9;
      llegir(c);
    }
  } else if (c == V) {
    d=5;
    llegir(c);
    while(c==I) {
      d++;
      llegir(c);
    }
  }
  return d;
}
  

int rtoi(char& c) {
  int x=rtod(c,'M',' ', ' ')*1000;
	x+=rtod(c,'C','D', 'M')*100;
	x+=rtod(c,'X','L', 'C')*10;
	x+=rtod(c,'I','V', 'X');
	return x;
}


int main () {
  char c;
  while (llegir(c)) {
    int x = rtoi(c);
    cout << " = "<< x << endl;
  }
}
  
#include <iostream>
using namespace std;

int main() {
 
 char c;
 cin >> c;
 if (c>='a' and c<= 'z')
   cout << char(c-'a'+'A') << endl;
 
 if (c>='A' and c<= 'Z')
	 cout << char(c-'A'+'a') << endl;
}


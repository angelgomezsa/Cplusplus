#include <iostream>
using namespace std;

int main() {
 
 char c;
 cin >> c;
 if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
   cout << "minuscula" << endl << "vocal" << endl;
 else if (c >= 'a' and c<= 'z') cout << "minuscula" <<  endl << "consonant" << endl; 

  if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
   cout << "majuscula" << endl << "vocal" << endl;
 else if (c >= 'A' and c<= 'Z') cout << "majuscula" <<  endl << "consonant" << endl;
 
  
}


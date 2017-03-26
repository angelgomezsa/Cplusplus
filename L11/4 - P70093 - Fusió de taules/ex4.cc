#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
  vector<double> r;
  int i1=0,i2=0;
  while (i1 < v1.size() and i2 < v2.size()) {
    if (v1[i1] <= v2[i2]) r.push_back(v1[i1++]);
    else r.push_back(v2[i2++]);
  }
  for (;i1<v1.size();i1++) r.push_back(v1[i1]);
  for (;i2<v2.size();i2++) r.push_back(v2[i2]);
  return r;
}



/*
Escritura alternativa:
 
vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
  vector<double> r;
  int i1=0,i2=0;
  while (i1 < v1.size() and i2 < v2.size()) {
    if (v1[i1] <= v2[i2]) {
      r.push_back(v1[i1]);
      i1++;
    }
    else {
      r.push_back(v2[i2]);
      i2++;
    }
  }
  for (;i1<v1.size();i1++) r.push_back(v1[i1]);
  for (;i2<v2.size();i2++) r.push_back(v2[i2]);
  return r;
}
*/

int main() {
	vector<double> v1 = {2, 3, 5};
	vector<double> v2 = {3, 5, 5, 7};
	
	vector<double> fus = fusio(v1, v2);
	
	for (int i=0;i<fus.size();i++) 
		cout << fus[i] << ' ';
}
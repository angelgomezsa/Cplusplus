#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
  for (int i=1;i<int(v.size());i++)
    for (int j=i;j > 0 and v[j]<v[j-1];j--)
      swap(v[j-1],v[j]);
}

int main() {
	
}
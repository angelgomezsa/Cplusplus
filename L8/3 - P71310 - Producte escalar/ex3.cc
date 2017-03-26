#include <iostream>
#include <vector>
using namespace std;

// multiplicar pos i del vector u por la misma del vector v
// ir sumando el resultado al producto de todas las demas posiciones 

double producte_escalar(const vector<double>& u, const vector<double>& v) {
	double product = 0;
    for (int i = 0; i<u.size(); i++)
        product = product + (u[i])*(v[i]);
    return product;
	
}

int main() { 

}
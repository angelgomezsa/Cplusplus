#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


void inserta(vector<string> &w,vector<string>&v,int ii,int jj) {
	for (int i=0;i<int(w.size());i++)
		for (int j=0;j<int(w[0].size());j++)
			v[i+ii][j+jj]=w[i][j];
}  


vector<string> dibuixa(int n) {
	if (n==1) {
		vector<string> v(3);
		v[0]=" | ";
		v[1]="-O-";
		v[2]=" | ";
		return v;
	}
	vector<string> w=dibuixa(n-1);
	int mida=int(w.size());
	vector<string> v(3*mida,string(3*mida,' '));
	inserta(w,v,0,mida);
	inserta(w,v,mida,0);
	inserta(w,v,mida,mida);
	inserta(w,v,mida,2*mida);
	inserta(w,v,2*mida,mida);
	/*for (int i=0;i<3*mida;i++)
		for (int j=0;j<3*mida;j++)
		 	if (i/mida==1 or j/mida==1)
				v[i][j]=w[i%mida][j%mida];
	*/
	return v;
}

int main() {
	int n;
	while (cin>>n) {
		vector<string> v=dibuixa(n);
		for (int i=0;i<int(v.size());i++)
			cout<<"|"<<v[i]<<"|"<<endl;
	}
}
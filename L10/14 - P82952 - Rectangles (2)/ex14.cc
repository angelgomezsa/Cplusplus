#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	while (cin>>n and n!=0) {
		int maxesq,mindre,maxbaix,mindalt;
		cin>>maxesq>>mindre>>maxbaix>>mindalt;
		for (int i=0;i<n-1;i++) {
			int esq,dre,baix,dalt;
			cin>>esq>>dre>>baix>>dalt;
			maxesq=max(maxesq,esq);
			mindre=min(mindre,dre);
			maxbaix=max(maxbaix,baix);
			mindalt=min(mindalt,dalt);
		}
		if (mindre<=maxesq or mindalt<=maxbaix) cout<<"interseccio buida"<<endl;
		else cout<<"punt inferior esquerre = ("<<maxesq<<", "<<maxbaix<<"); punt superior dret = ("<<mindre<<", "<<mindalt<<")"<<endl;
	}
}
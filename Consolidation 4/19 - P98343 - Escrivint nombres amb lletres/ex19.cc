#include <iostream>
using namespace std;

char nom[][80]={"zero","un","dos","tres","quatre","cinc","sis","set","vuit","nou",
	    "deu","onze","dotze","tretze","catorze","quinze","setze","disset",
	    "divuit","dinou","vint"};

char prefix[][80]={"","","vint-i","trenta","quaranta","cinquanta","seixanta",
	       "setanta","vuitanta","noranta"};


// n<100
void escriupetit(int n) {
	if (n<=20) cout<<nom[n];
	else {
		cout<<prefix[n/10];
		if (n%10!=0) cout<<"-"<<nom[n%10];
	}
}

void escriucentenes(int n) {
	n/=100;
	if (n==1) cout<<"cent";
	else cout<<nom[n]<<"-cents";
}

// n<1000
void escriumitja(int n) {
	if (n>=100) {
		escriucentenes(n);
		if (n%100!=0) {
			cout<<" ";
			escriupetit(n%100);
		}
	} 
	else escriupetit(n);
}

void escriumilers(int n) {
	n/=1000;
	if (n==1) {
		cout<<"mil";
		return;
	}
	escriumitja(n);
	cout<<" mil";
}

// n<1000000
void escriugran(int n) {
	if (n>=1000) {
		escriumilers(n);
		if (n%1000!=0) {
			cout<<" ";
			escriumitja(n%1000);
		}
	}
	else escriumitja(n);
}

void escriumilions(int n)	{
	n/=1000000;
	if (n==1) {
		cout<<"un milio";
		return;
	}
	escriugran(n);
	cout<<" milions";
}

int main() {
	int n;
	while (cin>>n) {
		cout<<n<<": ";
		if (n>=1000000) {
			escriumilions(n);
			if (n%1000000!=0) {
				cout<<" ";
				escriugran(n%1000000);
			}
		}
		else escriugran(n);
		cout<<"."<<endl;
	}
}
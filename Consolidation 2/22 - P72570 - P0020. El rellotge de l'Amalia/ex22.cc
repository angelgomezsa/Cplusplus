#include <iostream>
#include <cmath>
using namespace std;

void llegeix_hora(int& h, int& m, int& s) {
	char c;
	// read the first '|'
	cin >> c; 
	
	// while there isn't a '|'
	// read the number and reverse it
	// since you'll read the heaviest digit first
	while (cin >> c and c != '|') {
		if (c == '*') h = 10*h+1;
		else h = 10*h;
	}
	while (cin >> c and c != '|') {
		if (c == '*') m = 10*m+1;
		else m = 10*m;
	}
	while (cin >> c and c != '|') {
		if (c == '*') s = 10*s+1;
		else s = 10*s;
	}
}


void escriu_hora(int h, int m, int s) {
	// while the number isn't 0
	// grab the last integer
	// if it's a 1, elevate 2 to the ith power and add it to the current sum 
	// i increases every digit
	int i = 0;
	int hr=0;
	while (h>0) {
		if (h%10 == 1) hr+= pow(2,i);
		i++;
		h/=10;
	}
	i = 0;
	int mr=0;
	while (m>0) {
		if (m%10 == 1) mr+= pow(2,i);
		i++;
		m/=10;
	}
	i = 0;
	int sr=0;
	while (s>0) {
		if (s%10 == 1) sr+= pow(2,i);
		i++;
		s/=10;
	}
	cout << hr <<":"<<mr<<":"<<sr<< endl;
}

int main() {

	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		int h=0,m=0,s=0;
		llegeix_hora(h,m,s);
		escriu_hora(h,m,s);
	}

}
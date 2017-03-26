#include <iostream>
using namespace std;

int main() {

	char c;
	while (cin >> c) {
		int sum=0,pos=0;
		// read the first ISBN number
		// if there's a '?', mark the position with pos
		// else sum the number multiplied by its position (ie: first number = n*10, second number = n*9, etc)
		if (c == '?') pos = 10;
		else sum+= (c-'0')*10;
		// read the following 8 ISBN numbers
		for (int i=1;i<9;i++) {
			if (cin >> c and c == '?') pos = 10-i;
			else sum+= (c-'0')*(10-i);
		}
		// read the last ISBN numbers
		// if it's a 'X', replace it with a 10
		// if it's a '?', mark the position with pos
		cin >> c;
		if (c == 'X') sum+=10;
			else if (c == '?') pos = 1;
				else sum+= c-'0';
				
		// to discover which number goes into ?'s position
		// we put a 0 and multiply it by ?'s position
		// and add it to the sum of the ISBN number
		// if it's multiple of 11, a 0 goes into ?'s position
		// else we increase it by 1 and calculate again
		int n=0;
		while ((sum+pos*n)%11 != 0) {
			n++;
		}
		
		if (n == 10 and pos == 1) cout << 'X' << endl;
		else cout << n << endl;
	}
}	
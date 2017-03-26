#include <iostream>
#include <string>
using namespace std;

// find a substring x in a string y
// return at which position (letter) it is

int substring(const string& x, const sting& y) {
	int i=0,j=0;
	// if i+x.size is bigger than y the string x can't be inside y
	// 'j' compares a letter of x to one of y starting from position 'i'
	while (i+x.size() <= y.size() and j<x.size()) {
		if (x[j] == y[i+j]) j++;
		else {
			i++;
			j=0;
		}
	}
	// if all the letters of x match, we've found it
	if (j == x.size()) return i;
	else return -1;
}
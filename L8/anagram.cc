#include <iostream>
#include <vector>
using namespace std;

int main() { 
	// size of the vector has to be the number of letters from a to z 
	const int n = int('z')-int('a');
	vector<int> count(n,0);
	
	// read the first sentence
	// count the number of occurrences of each letter
	char c;
	while (cin >> c and c != '.') {
		if (c>='a' and c<='z') ++count[int(c)-int('a')];
		if (c>='A' and c<='Z') ++count[int(c)-int('A')];
		
	}
	
	// read the second sentence
	// discount the occurrence of each letter
	// if the counter becomes negative, it's not an anagram
	bool is_anagram = true;
	while (cin >> c and c != '.' and is_anagram) {
		if (c>='a' and c<='z') {
			--count[int(c)-int('a')];
			is_anagram = count[int(c)-int('a')] >= 0;
		}		
		if (c>='A' and c<='Z') {
			--count[int(c)-int('A')];
			is_anagram = count[int(c)-int('A')] >= 0;
		}
	}
	
	// all occurrences must default to 0 to be an anagram
	for (int i=0;i<n and is_anagram;i++) {
		is_anagram = count[i] == 0;
	}
	
	cout << is_anagram << endl;
}
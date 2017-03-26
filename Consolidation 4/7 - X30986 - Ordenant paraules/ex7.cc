#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compara(pair <int,string> p1, pair <int,string> p2) {
	return p1.first > p2.first or (p1.first==p2.first and p1.second < p2.second); 
}

int main() {
	int n;
	while (cin >> n) { 		
		vector<string> p(n);
		for (int i=0;i<n;i++) 
			cin>>p[i];
		sort(p.begin(),p.end());
		
		vector<pair<int,string> > result;
		int i=0,c=0;
		string s=p[0];
		for (int i=0;i<n;i++) {
			if (s==p[i]) c++; 
			else {
			  result.push_back(pair<int,string> (c,s));
			  s=p[i]; c=1; 
			}
			if (i==n-1) result.push_back(pair<int,string> (c,s));
		}
		
		sort(result.begin(),result.end(),compara);
		for (int i=0;i<result.size();i++) 
			cout << result[i].first << ' ' << result[i].second << endl;
		cout << string(10,'-') << endl;
	}
}
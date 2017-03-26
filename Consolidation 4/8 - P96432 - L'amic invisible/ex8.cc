#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int casos;
	cin >> casos;
	for (int cas=0;cas<casos;cas++) {
		int m;
		cin >> m;
		vector<pair<string,int> > v;
		for (int j=0;j<m;j++) {
			string nom1,nom2;
			int eur;
			cin >> nom1 >> nom2 >> eur;
			v.push_back(pair<string,int> (nom1,-eur));
			v.push_back(pair<string,int> (nom2,+eur));
		}
		sort(v.begin(),v.end()); 
		vector<pair<int,string> > w;
		for (int i=0;i<int(v.size());i++) {
			if (i==0 or v[i].first!=v[i-1].first) {
				int s=0;
				for (int j=i;j<int(v.size()) and v[j].first==v[i].first;j++) 
				s+=v[j].second;
				w.push_back(pair<int,string> (s,v[i].first));
			}
		}
		sort(w.begin(),w.end());
		for (int i=0;i<int(w.size());i++)
			cout << w[i].second << ' ' << w[i].first << endl;
		cout << endl;
	}
}
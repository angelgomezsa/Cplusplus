#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compara(pair <pair<int,int>,int> coord1, pair <pair<int,int>,int> coord2) {
	return (
	  coord1.second < coord2.second 
	  or 
	  (coord1.second == coord2.second and coord1.first.first < coord2.first.first)
	  or 
	  (coord1.second == coord2.second and coord1.first.first == coord2.first.first and 
	   coord1.first.second < coord2.first.second));
}



int distancia(int x, int y, int xn, int yn) {
	int d=0;
	if (x>=0) {
		if (x>xn) d+=x-xn;
		else d+=xn-x;
	}
	else if (x<0) {
		if (x>xn) d+=x-xn;
		else d+=-(x-xn);
	}	
	if (y>=0) {
		if (y>yn) d+=y-yn;
		else d+=yn-y;
	}
	else if (y<0) {
		if (y>yn) d+=y-yn;
		else d+=-(y-yn);
	}
	return d;
}

void escriu(vector<pair<pair<int,int>,int> > &coord) {
	int dist=-1;
	for (int i=0;i<coord.size();i++) {
		if (coord[i].second > dist) {
			dist=coord[i].second;
			cout << "punts a distancia " << dist << endl;
		}
		cout << coord[i].first.first << ' ' << coord[i].first.second << endl;
	}
}

int main() {
	int x,y;
	cin >> x >> y;
	int n;
	cin >> n;
	vector<pair<pair<int,int>,int> > coord(n);
	for (int i=0;i<n;i++) {
		int xn,yn;
		cin >> xn >> yn;
		coord[i].first.first = xn;
		coord[i].first.second = yn;
		coord[i].second=distancia(x,y,xn,yn);
	}
	sort(coord.begin(),coord.end(),compara);
	escriu(coord);
}
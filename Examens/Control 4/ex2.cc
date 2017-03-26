#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Mat;

Mat read_mat() {
	int n,m;
	cin>>n>>m;
	Mat v(n,vector<char> (m));
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
		cin>>v[i][j];
	return v;
}

void write_mat(const Mat& v) {
	int n=int(v.size());
	int m=int(v[0].size());
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++)
			cout<<v[i][j];
		cout<<endl;
	}
	cout<<endl;
}

// Pre: v is a nxm matrix, w is a n'xm' matrix, and
// 0<=i1<i1+n'<=n and 0<=j1<j1+m'<=m. 
// Post: Returns the result of modifying v by inserting
// the contents of w inside v starting since the position i1,j1.
// NOTE: SINCE v IS A NON-CONSTANT PARAMETER PASSED PER VALUE,
// WE CAN MODIFY ITS VALUE DIRECTLY AND RETURN IT.
Mat replace_submat(Mat v,const Mat& w,int i1,int j1) {
	int i2=0;
	for (int i=i1;i<int(w.size())+i1;i++) {
		int j2=0;
		for (int j=j1;j<int(w[0].size())+j1;j++) {
			v[i][j]=w[i2][j2];
			j2++;
		}
		i2++;
	}
	return v;
}

int main() {
	Mat v=read_mat();
	int i1,j1;
	
	while (cin>>i1>>j1) {
		Mat w=read_mat();
		write_mat(replace_submat(v,w,i1,j1));
	}
}
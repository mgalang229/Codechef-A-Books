#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[100], n;
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		vector<int> v;
		for(int i=0; i<n; ++i) {
			int cnt=0;
			for(int j=0; j<n; ++j) {
				if(i==j)
					continue;
				if(a[i]<a[j])
					cnt++;
			}
			v.push_back(cnt);
		}
		for(auto x : v)
			cout << x << " ";
		cout << "\n";
	}
}

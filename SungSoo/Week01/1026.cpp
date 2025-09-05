#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	cin >> n;
	vector<int> a;
	vector<int> b;
	
	for(int i=0;i<n;i++){
		cin >> k;
		a.push_back(k);
	}
	for(int i=0;i<n;i++){
		cin >> k;
		b.push_back(k);
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<int>());
 	int rst = 0;
 	
 	for(int i=0;i<n;i++){
 		rst += a[i] * b[i];
	}
	
	cout << rst;
	 
    return 0;
}

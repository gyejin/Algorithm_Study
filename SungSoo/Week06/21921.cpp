#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> x;
	vector<int> v(n);
	
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	
	int sum = accumulate(v.begin(),v.begin()+x,0);
	int max_s = sum;
	int cnt = 1;
	
	for(int i=x;i<n;i++){
		sum += v[i] - v[i-x];
		if(sum>max_s){
			max_s=sum;
			cnt=1;
		}
		else if(sum==max_s) cnt++;
	}
	
	if (max_s == 0)
        cout << "SAD";
    else
        cout << max_s << "\n" << cnt;
	

    return 0;
}

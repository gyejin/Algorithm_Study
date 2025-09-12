#include <bits/stdc++.h>
using namespace std;

int k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> k;
	int j = 64;
	int cnt = 0;
	
	while(k>0){
		if(j>k){
			j /= 2;
		}
		else{
			k -=j;
			cnt++;
		}
	}

	cout << cnt;
    return 0;
}


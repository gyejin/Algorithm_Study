#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[26];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> s;
	
	for(int i=0;i<s.size();i++){
		cnt[s[i] - 'a']++;
	}
	
	int odd = 0;
	
	for(int i=0;i<26;i++){
		if(cnt[i] % 2 == 1) odd++;
	}
	
	int rst = s.size();
	
	if(odd==0) rst ++;
	else if(odd > 1) rst += odd - 1;
	

	cout << rst;
    return 0;
}


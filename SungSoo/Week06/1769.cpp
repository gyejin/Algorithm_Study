#include <bits/stdc++.h>
using namespace std;

int n;
int cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	string s;
	cin >> s;
	
	while(s.size()>1){
		n = 0;
		for(int i=0;i<s.size();i++){
			n += s[i] - '0';
		}
		s = to_string(n);
		cnt++;
	}
	
	cout << cnt << "\n";
	if((s[0] - '0')%3==0) cout << "YES";
	else cout << "NO";
	
    return 0;
}
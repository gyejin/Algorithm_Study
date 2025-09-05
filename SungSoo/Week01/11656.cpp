#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	cin >> s;
	vector<string> v;
	for(int i=0;i<s.size();i++){
		string cur = "";
		for(int j=i;j<s.size();j++){
			cur += s[j];
		}
		v.push_back(cur);
	}

	sort(v.begin(),v.end());
	
	for(auto k : v){
		cout << k << "\n";
	}

    return 0;
}

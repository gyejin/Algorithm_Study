#include <bits/stdc++.h>
using namespace std;

int a, b, k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	
	cin >> a >> b;
	set<int> s;
	
	for(int i=0;i<a;i++){
		cin >> k;
		s.insert(k);
	}
	
	for(int i=0;i<b;i++){
		cin >> k;
		if(s.find(k) != s.end()) s.erase(k);
		
	}
	
	if(s.empty()) cout << 0;
	
	else{
		cout << s.size() << "\n";
		for(auto i : s){
			cout << i << " ";
		}
	}
	
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int k, a;
	
	while(1){
		cin >> k;
		if(k==0) break;
		vector<int> v;
		for(int i=0;i<k;i++){
			cin >> a;
			v.push_back(a);
		}
		vector<int> mask(k,0);
		fill(mask.begin(),mask.begin() + 6,1);
		
		do{
			for(int i=0;i<k;i++){
				if(mask[i]) cout << v[i] << " ";
			}
			cout << "\n";
			
		}while(prev_permutation(mask.begin(),mask.end()));
		cout << "\n";
	}
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	getline(cin,s);
	
	int cur = 0;
	int rst = 0;
	
	for(int i=0;i<s.size();i++){
		if(s[i] == 'U'){	
			cur = i;
			rst++;
			break;
		}
	}
	for(int i=cur;i<s.size();i++){
		if(s[i] == 'C'){	
			cur = i;
			rst++;
			break;
		}
	}
	for(int i=cur;i<s.size();i++){
		if(s[i] == 'P'){	
			cur = i;
			rst++;
			break;
		}
	}
	for(int i=cur;i<s.size();i++){
		if(s[i] == 'C'){	
			cur = i;
			rst++;
			break;
		}
	}
	
	if(rst == 4) cout <<"I love UCPC";
	else cout << "I hate UCPC";
	
	
    return 0;
}

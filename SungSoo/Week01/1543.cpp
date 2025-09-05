#include <bits/stdc++.h>
using namespace std;

string s1,s2;
bool check[2500];
int rst;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	getline(cin,s1);
	getline(cin,s2);
	
	for(int i=0;i<s1.size();i++){

		if(s1[i] == s2[0] && check[i] == false){
			bool flag = true;
			for(int j=0;j<s2.size();j++){
				if(s1[i + j] != s2[j]) flag = false;
			}
			if(flag){
				for(int j=0;j<s2.size();j++){
					check[i+j] = true;
				}
			rst ++;
			}
		}
	}
	
	cout << rst;

    return 0;
}

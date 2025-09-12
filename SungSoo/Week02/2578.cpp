#include <bits/stdc++.h>
using namespace std;

int a[5][5];

void mark(int t){
	for(int i=0;i<5;i++){
		for(int j=0; j<5;j++){
			if(a[i][j]==t) a[i][j] = 0;
		}
	}
	return;
}

bool check(){
	 int lines = 0;
    // 가로 줄
    for (int i = 0; i < 5; ++i) {
        bool ok = true;
        for (int j = 0; j < 5; ++j)
            if (a[i][j] != 0) { ok = false; break; }
        if (ok) ++lines;
    }

    // 세로 줄
    for (int j = 0; j < 5; ++j) {
        bool ok = true;
        for (int i = 0; i < 5; ++i)
            if (a[i][j] != 0) { ok = false; break; }
        if (ok) ++lines;
    }

    // 대각선 (좌상→우하)
    bool ok = true;
    for (int i = 0; i < 5; ++i)
        if (a[i][i] != 0) { ok = false; break; }
    if (ok) ++lines;

    // 대각선 (우상→좌하)
    ok = true;
    for (int i = 0; i < 5; ++i)
        if (a[i][4 - i] != 0) { ok = false; break; }
    if (ok) ++lines;

    return lines >= 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];
		}
	}
	int rst = 0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int k;
			cin >> k;
			mark(k);
			rst++;
			if(check()){
				cout << rst;
				return 0;
			}
		}
	}
	

    return 0;
}

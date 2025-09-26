#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> n;
	deque<int> deq;
	while(n--){
		string s = "";
		int a = 0;
		cin >> s;
		if(s=="push_front"){
			cin >> a;
			deq.push_front(a);
		}else if(s=="push_back"){
			cin >> a;
			deq.push_back(a);
		}else if (s == "pop_front") {
            if (deq.empty()) cout << -1 << "\n";
            else {
                cout << deq.front() << "\n";
                deq.pop_front();
            }
        } else if (s == "pop_back") {
            if (deq.empty()) cout << -1 << "\n";
            else {
                cout << deq.back() << "\n";
                deq.pop_back();
            }
        }
		else if(s=="size"){
			cout << deq.size() << "\n";
		}else if(s=="empty"){
			if(!deq.empty()) cout << 0 << "\n";
			else cout << 1 << "\n";
		}else if(s=="front"){
			if(deq.empty()) cout << -1 << "\n";
			else cout << deq.front() << "\n";
		}else if(s=="back"){
			if(deq.empty()) cout << -1 << "\n";
			else cout << deq.back() << "\n";
		}
	}

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

  	cin >> n;
  	queue<int> q;
  	for(int i=0;i<n;i++){
  		q.push(i+1);
	  }
	  if (q.size()==1){
	  	cout << 1;
	  	return 0;
	  }
	  while(1){
	  	q.pop();
	  	
	  	q.push(q.front());
		q.pop();
		
		if(q.size() == 1) break;
	  }
	  
	  cout << q.front();
	  

    return 0;
}

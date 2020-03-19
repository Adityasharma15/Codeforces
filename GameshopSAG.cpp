#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n ,  m;
	cin>>n>>m;

    stack <ll> cw;
	stack <ll> aw;


	
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		cw.push(x);
	}
	for(ll i=0;i<m;i++){
		int x;
		cin >> x;
		aw.push(x);
	}
	
	
	int mx=max(m,n);
	int count=0;
	for(int i=0;i<mx;i++){
		if(aw.empty()){
			break;
		}
		if(cw.empty()){
			break;
		}
		if(aw.top()>=cw.top()){
			count++;
			aw.pop();
			cw.pop();
		}
		else
		cw.pop();
	}
	cout<<count<<endl;
}

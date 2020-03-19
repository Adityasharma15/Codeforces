#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	long long int c[n] , a[m];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(long long int i=0;i<m;i++){
		cin>>a[i];
	}
	stack <long long int> cw;
	stack <long long int> aw;
	for(int i=n-1;i>=0;i--){
		cw.push(c[i]);
	}
	for(int i=m-1;i>=0;i--){
		aw.push(a[i]);
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

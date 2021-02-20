#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, odd_elements_count=0;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]%2!=0){
				odd_elements_count++;
			}
		}
		if(n==x && odd_elements_count % 2 == 0)
		{
			cout << "No" <<endl;
		}
		else if(x<n && odd_elements_count == 0){
			cout << "No"<<endl;
		}
		else{
			cout << "Yes"<<endl;
		}
	}
	return 0;	
}

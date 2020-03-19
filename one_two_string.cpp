#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ll t;
	cin >> t;

	while(t--){

	    int a,b,c;
        cin>>a>>b>>c;
        
        int mindiff=INT_MAX;

        for(int i=a-1;i<=a+1;i++){
            for(int j=b-1;j<=b+1;j++){
                for(int k=c-1;k<c+1;k++){
                    int diff=abs(i-j)+abs(j-k)+ abs(k-i);
                    mindiff=min(diff, mindiff);
                }
            }
        }
        cout<<mindiff<<endl;

	}
}
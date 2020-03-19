#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll int L , r , arr[10] , redflag = 0;
	
	cin >> L >> r;
	
	for(ll int i = L;i<=r;i++)
	{
		memset(arr, 0 ,sizeof(arr));
		
		ll int n = i;
		
		while(n)
		{
			arr[n%10]++;
			n=n/10;
		}
		
		int flag = 0;
		
		for(ll int z =0;z<10;z++)
		{
			if(arr[z]>1) 
			flag = 1;
		}
		
		if(flag == 0)
		{
			cout << i << endl;
			redflag = 1;
			
			break;
		}
		
	}
	
	if(redflag == 0)
	cout << "-1" << endl;

}

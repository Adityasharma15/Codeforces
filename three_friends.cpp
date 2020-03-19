#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ll t;
	cin >> t;

	while(t--)
	{

	ll arr[3] , mean = 0;

	for(ll i = 0; i<3; i++)
	{
		cin >> arr[i];
		mean+= arr[i];
	}		
    
    mean /=3;

    if(arr[0]<mean)
    	arr[0]++;
    	
    if(arr[0] > mean)
		arr[0]--;	
	
	if(arr[1]<mean)
    	arr[1]++;
    	
    if(arr[1] > mean)
		arr[1]--;
	
	if(arr[2]<mean)
    	arr[2]++;
    	
    if(arr[2] > mean)
		arr[2]--;    
	
    ll diff= 0;

    diff += abs(arr[1] - arr[0]);
    diff += abs(arr[2] - arr[0]);
    diff += abs(arr[2] - arr[1]);

    cout << diff << "\n";

	}
}

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[100001];
        memset(arr, 0 ,sizeof(arr));

        ll x, max = 0;

        for(ll i  = 0; i< n;i++)
        {   
            cin >> x;
            arr[x]++;

            if(max<x)
                max =x;
        }

        vector<int> v;

        int flag = 0;

        for(ll i = 0; i<=max; i++)
        {
            if(arr[i]>1)
            {
            	v.push_back(i);
            	
                for(ll x = 0; x<(arr[i]-1); x++)
                {
                                
				flag = 1;
				   
                for(ll j = 1; j<i; j++)
                {
                    if(arr[j]==0 && flag==1)
                    {
                        arr[j]=1;
                        v.push_back(j);
                        flag = 0;
                    }                    
                    
                }
                }
                
            }

            else if(arr[i]==1)
            {
                v.push_back(i);
            }


        }

        if(flag==1)
            cout << "-1" <<"\n";

        else
        {
            for(ll i = 0; i<v.size(); i++)
            {
                cout << v[i] << " ";
            }

            cout << "\n";
        }     
    }
}

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

        ll x, y;


        ll first[n], second[n];

        for(ll i =0 ;i<n;i++)
        {
            cin >> x >> y;
            
            first[i] = min(x,y);
            second[i] = max(x,y);
        }
		
        sort(first, first + n);
        
        sort(second, second + n);

		x = first[n-1] - second[0];
		
        if(x>0)
        cout << x << "\n";

        else
        cout << "0" << "\n";

    }

}

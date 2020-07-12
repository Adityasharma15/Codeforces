#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

     ll n;
     cin >> n;

     if(n%2==0)
     {
       cout << n/2 << " " << n/2 << "\n";
     }

     else if(n%3==0)
     {
       ll temp = n/3;
       cout << temp <<  " " << (n-temp) << "\n";
     }

     else
     {

       bool found = false;
       for(ll i = 5; i*i<=n; i=i+2)
       {
         if(n%i==0)
         {
            ll temp = n/i;
            cout << temp << " " << (n-temp) << "\n";
            found = true;
            break;
         }
       }

       if(!found)
        cout << "1 " << (n-1) << "\n";

     }



	}

  return 0;

}

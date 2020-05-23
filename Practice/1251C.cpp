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
		 string s;
     cin >> s;

     ll n = s.length();

     vector<ll> even;
     vector<ll> odd;

     ll temp;

     for(ll i = 0; i<n; i++)
     {
       temp = s[i] - '0';
       if(temp%2==0) even.push_back(temp);

       else odd.push_back(temp);
     }

     ll i = 0, j = 0;

     vector<ll> ans;

     // for(auto x: even) cout << x << " ";
     // cout << "\n";
     //
     // for(auto y : odd) cout << y << " ";
     // cout << "\n";

     while(i<even.size() && j< odd.size())
     {

       // cout << even[i] << " & " << odd[i] << "\n";

       if(even[i] <= odd[j])
       {
         ans.push_back(even[i]);
         // cout << "*"<< even[i] << "\n";
          i++;
       }

       else
       {
         ans.push_back(odd[j]);
         // cout << "$"<< odd[i] << "\n";
         j++;
       }

     }

     // cout << "i " << i << " j " << j << "\n";

     while(i<even.size())
     {
       ans.push_back(even[i]);
       i++;
     }

     while(j<odd.size())
     {
       ans.push_back(odd[j]);
       j++;
     }

     for(auto x: ans)
      cout << x;

      cout << "\n";

	}

  return 0;

}

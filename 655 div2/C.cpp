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
  ll displaced = 0;
  vector<ll> ans;

  for(ll i = 0; i<n; i++)
  {
    ll temp;
    cin >> temp;
    if(temp!=(i+1))
    {
        displaced++;
        ans.push_back(i);
    }
  }

  bool sequencial = true;
  for(ll i = 0; (i+1)<ans.size(); i++)
  {
    if((ans[i+1]-ans[i])!=1)
      sequencial = false;
  }

  if(displaced==0)
      cout << "0\n";

  else if(displaced == n || sequencial)
    cout << "1\n";

  else
      cout << "2\n";

}

return 0;

}

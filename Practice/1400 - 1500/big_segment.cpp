#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n;
  cin >> n;

  vector<pair<ll,ll>> segments;

  ll a = INT_MAX, b = INT_MIN;
  for(ll i = 0; i<n; i++){
    ll ta, tb;
    cin >> ta >> tb;

    a = min(a, ta);
    b = max(b, tb);

    segments.push_back({ta,tb});
  }

  ll index = -1;
  for(ll i = 0; i<n; i++){

    if( segments[i].first <= a && segments[i].second >= b){
      index = i+1;
    }
  }

   cout << index<<" \n" ;
   return 0;
}

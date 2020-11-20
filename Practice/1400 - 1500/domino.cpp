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

  ll odda = 0, oddb = 0;
  vector<pair<ll, ll> > domino;
  for(ll i = 0; i<n; i++){
    ll a, b;
    cin >> a >> b;
    domino.push_back({a,b});

    if(a&1){
      odda++;
    } if(b&1){
      oddb++;
    }
  }

  // both even
  if(!(odda&1) && !(oddb&1)){
    cout << "0" << "\n";
    return 0;
  }

  // both odd
  ll swaps = 0;
  bool possible = false;
  if(odda&1 && oddb&1){

    for(ll i =0; i<n; i++){
      if(!(domino[i].first&1) && domino[i].second&1)
        possible = true;

      if(domino[i].first&1 && !(domino[i].second&1))
        possible = true;
    }

  }

    if(possible)
      cout << "1\n";

    else
     cout << "-1\n";

  return 0;
}

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

  vector<ll> vec(n);
  unordered_map<int, int> mapp;
  ll maxi = 1;

  for(ll i = 0; i<n; i++){
    cin >> vec[i];
    ll temp = ++mapp[vec[i]];
    maxi = max(maxi, temp);
  }

  cout << maxi << "\n";
  return 0;
}

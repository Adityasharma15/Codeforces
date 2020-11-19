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
  vector<ll> flowers(n,0);
  for(ll i = 0; i<n; i++){
    cin >> flowers[i];
  }

  sort(flowers.begin(), flowers.end());
  ll maxi = flowers[n-1] - flowers[0];

  ll i = 1;
  while(i<(n-1) && flowers[0] ==flowers[i]){
    i++;
  }

  ll f = i;
  i = n-2;
  while(i>0 && flowers[n-1] == flowers[i]){
    i--;
  }

  ll s = (n-1) - i;
  if(maxi)
  cout << maxi << " " << f*s << "\n";

  else
   cout << maxi << " " << (n*(n-1))/2 << "\n";

  return 0;
}

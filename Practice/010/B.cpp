#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, b;
  cin >> n >> b;

  vector<ll> vec(n);
  vector<ll> hashh(n);

  for(ll i = 0; i<n; i++){
    cin >> vec[i];

    if(vec[i]%2 == 0){
      hashh[i] = 1;
    }

    else{
      hashh[i] = -1;
    }
  }

  priority_queue<int, vector<int> , greater<int> > pq;

  for(ll i = 0; i<(n-1); i++)
  {
    ll left = 0, right = 0;

    for(ll j = 0; j<=i; j++){
      left+= hashh[j];
    }

    for(ll j = i+1; j<n; j++){
      right+= hashh[j];
    }

    if(left == 0 && right == 0){
      pq.push(abs(vec[i]- vec[i+1]));
    }
  }

  ll cost = 0;
  ll ops = 0;

  while(!pq.empty()){
    cost += pq.top();
    pq.pop();

    if(cost <= b)
      ops++;

    else
      break;
  }

  cout << ops << "\n";
  return 0;
}

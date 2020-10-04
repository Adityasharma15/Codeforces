//https://codeforces.com/problemset/problem/998/A

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

  ll mini = INT_MAX;
  ll minadd = 0;
  for(ll i = 0; i<n; i++){
    cin >> vec[i];

    if(vec[i] < mini){
      minadd = i;
      mini = vec[i];
    }
  }

  if(n == 1){
    cout << "-1" << "\n";
  }

  else if(n == 2 && vec[0] == vec[1]){
    cout << "-1" << "\n";
  }

  else{
  cout << "1" << "\n" << minadd+1 << "\n";
  }

  return 0;
}

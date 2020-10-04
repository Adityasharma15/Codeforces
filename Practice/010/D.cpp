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

  string s;
  cin >> s;

  ll x = 0, y = 0;
  ll changes = 0, state = 0, curr_state = 0;

  if(s[0] == 'U'){
    state = 1;
    curr_state = 1;
  }

  for(ll i = 0; i<n; i++){

    if(s[i] == 'U'){
      y++;
    }

    else{
      x++;
    }

    if(x>y)
      curr_state = 0;

    if(x<y)
      curr_state = 1;

    if(state!=curr_state){
        changes++;
        // cout << i << "\n";
    }

    state = curr_state;
  }

  if(changes <=0)
    cout << "0" << "\n";

  else
    cout << changes << "\n";

  return 0;
}

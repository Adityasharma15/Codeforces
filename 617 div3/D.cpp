#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

    ll n, a, b, power;
    cin >> n >> a >> b >> power;

    ll points = 0;
    ll monster , sump = a + b;

    for(ll i= 0; i<n; i++)
    {
        cin >> monster;

        if( monster%sump > a || monster%sump == 0 )
        {
          if(power>0)
          {
            power--;
            points++;
          }
        }

        else
        {
          points++;
        }

        cout << points << "\n";  
    }

  // cout << points << "\n";

  return 0;

}

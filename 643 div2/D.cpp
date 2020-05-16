#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

    ll n, s;
    cin >> n >> s;

    ll temp = s - (n-1);

    ll poss = temp -1;

    // cout << "poss " << poss << " n-1" << n-1 << "\n";

    if(n == 1 && s!=1)
    {
      cout << "YES\n" << s << "\n" << temp-1 << "\n";
    }

    else if(n == s)
    {
      cout << "NO\n";

      // for(ll i = 0; i<n; i++)
      // cout << "1 ";

        // cout << "\n" << 1 << "\n";
    }


    else if( (n-1) >= poss || (n-1) >= (s - poss) )
    {
          cout << "NO\n";
          // cout << "$";
    }

    else
    {
      cout << "YES\n";

      for(ll i = 0; i<n-1; i++)
        cout << "1 ";

      cout << temp << "\n" << temp-1 << "\n";

    }


  return 0;

}

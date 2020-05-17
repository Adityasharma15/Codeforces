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

    ll points = 0, tempp = 0;
    ll monster , sump = a + b;

		vector<ll> ans;

    for(ll i= 0; i<n; i++)
    {
        cin >> monster;

        if( monster%sump > 0 && monster%sump <= a )
        {
          ans.push_back(0);
        }

        else
        {

					if(monster%sump == 0)
					{
						monster = b;
						tempp = monster/a;

						if(monster%a!=0)
							tempp++;
					}

					else
					{
						monster = monster%sump;

				  	tempp = monster/a;

				  	if(monster%a!=0)
					  	tempp++;

					  tempp--;

					}

					if(tempp<0)
						tempp = 0;

					ans.push_back(tempp);
        }
    }

		sort(ans.begin(), ans.end());

		for(auto i: ans)
		{
			// cout << i << " ";
				power -= i;

				if(power>=0)
				points++;
		}

		// cout << "\n";

  cout << points << "\n";

  return 0;

}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

      vector<string> vec;

      string s;

		  for(ll i = 0; i<9; i++)
      {
            cin >> s;
            vec.push_back(s);
      }

      ll temp1 = 0, temp2 = 0, temp3 = 0;

        for(ll j = 0; j<9; j++)
        {
              temp1 = j/3;

              if(j==3 || j==6)
              temp3 = 0;

              temp2 =  temp1 + temp3;

              if(vec[j][temp2] == 9)
                vec[j][temp2]--;

              else
              vec[j][temp2]++;

              temp3+=3;

        }

        for(ll i = 0;i<9; i++)
        {
            cout << vec[i] << "\n";

        }

	}

  return 0;

}

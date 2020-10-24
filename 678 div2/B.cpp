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
    ll m;
    cin >> m;
    vector<vector<int> > rr;

    vector<int> upper(m,0);
    upper[m-2] = 1;
    upper[m-1] = 6;

    rr.push_back(upper);

    for(int i = 0; i<m-1; i++){
      rotate(upper.begin(), upper.begin()+1, upper.end());
      rr.push_back(upper);
    }

    for(int i = 0; i<m; i++){
      for(int j = 0; j<m; j++){
        cout << rr[i][j] << " ";
      }
      cout << "\n";
    }
	}

  return 0;
}

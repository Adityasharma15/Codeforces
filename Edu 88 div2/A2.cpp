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
      ll n,m,k;
      cin>>n>>m>>k;
      ll cardsperplayer=n/k;
      if(m<=cardsperplayer)
      {
          cout<<m<<"\n";
          continue;
      }

      ll remainingjoker= m -cardsperplayer, Remainingplayer=k-1;

      if(remainingjoker<=Remainingplayer)
        cout<<cardsperplayer-1<<"\n";

      else
      {
      ll restCards= (remainingjoker%Remainingplayer!=0)? (remainingjoker/Remainingplayer)+1: remainingjoker/Remainingplayer;
      cout<<cardsperplayer-restCards << "\n";
      }
    }

  return 0;
}

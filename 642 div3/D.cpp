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
		 ll n;
     cin >> n;

     vector<ll> vec(n);

     priority_queue< pair< ll ,  pair< ll,ll >> > pq;

    pq.push(  { n ,  { 0, n -1 }   }  );

    ll l, r, size, count = 1, mid;

    while(!pq.empty())
    {

      l = pq.top().second.first;
      r = pq.top().second.second;
      size = pq.top().first;

      pq.pop();

      l*=-1;

      if(l > r)  continue;

      mid = (l+r)/2;

      vec[mid] = count;
      count++;

      pq.push( {   mid - l + 1 , {  -1*l  , mid - 1 }   } );
      pq.push(  {  r - mid  + 1  ,  {  -1*(mid +1), r  }    } );

    }

    for(auto i: vec) cout << i << " ";
    cout << "\n";

	}

  return 0;

}

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

  vector<ll> arr(n);
  vector<ll> hashh(100001, 0);

  ll top1 = 0, top2 = 0, top3 = 0;
  ll valtop1 = 0, valtop2 = 0, valtop3 = 0;

  for(ll i = 0; i<n; i++)
  {
      cin >> arr[i];
      hashh[arr[i]]++;

      if(hashh[arr[i]] > top1)
      {
         top1 = hashh[arr[i]];
         valtop1 = arr[i];
      }

      else if(hashh[arr[i]] > top2)
      {
         top2 = hashh[arr[i]];
         valtop2 = arr[i];
      }

      else if(hashh[arr[i]] > top3)
      {
         top3 = hashh[arr[i]];
         valtop3 = arr[i];
      }

  }


  ll q;
  cin >> q;

  while(q--)
  {
    char c;
    ll temp;
    bool ans = false;

    cin >> c >> temp;

    if(c == '+')
    {
      hashh[temp]++;
    }

    else
    {
      hashh[temp]--;
    }

    if(valtop1 == temp)
    {
      top1 = hashh[temp];
    }

    else if(valtop2 == temp)
    {
      top2 = hashh[temp];

      if(top2 > top1)
      {
        ll a = top1 , b = valtop1;
        top1 = top2, valtop1 = valtop2;
        top2 = a, valtop2  = b;
      }

    }

    else if(valtop3 == temp)
    {
      top3 = hashh[temp];

      if(top3 > top1)
      {
        ll a = top1 , b = valtop1;
        top1 = top3, valtop1 = valtop3;
        top3 = a, valtop3  = b;
      }

      if(top3 > top2)
      {
        ll a = top2 , b = valtop2;
        top2 = top3, valtop2 = valtop3;
        top3 = a, valtop3  = b;
      }

    }

    else
    {
      if(hashh[temp] > top1)
      {
         top1 = hashh[temp];
         valtop1 = temp;
      }

      else if(hashh[temp] > top2)
      {
         top2 = hashh[temp];
         valtop2 = temp;
      }

      else if(hashh[temp] > top3)
      {
         top3 = hashh[temp];
         valtop3 = temp;
      }
    }

    if(top1 >=4)
    {
      ll xoxo  = top1/2 + top2/2 + top3/2;

        if(xoxo >= 4)
          ans = true;
    }

		cout << top1 << " " << top2 << " " << top3 << "\n"; 

    if(ans)
      cout << "YES\n";

    else
      cout << "NO\n";
  }
  return 0;
}

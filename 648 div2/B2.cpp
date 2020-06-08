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

     vector<ll> a(n);
     vector<ll> sorta(n);
     vector<ll> b(n);

     for(ll i = 0; i<n; i++)
     {
       cin >> a[i];
       sorta[i]=a[i];
     }

     map<ll,ll> mapp0;
     map<ll,ll> mapp1;

     for(ll i = 0; i<n; i++)
     {
       cin >> b[i];

       if(b[i]==0)
        mapp0[a[i]]++;

        else
        mapp1[a[i]]++;
     }

     // vector<pair<ll,ll>> vec(n);
     //
     // for(ll i = 0; i<n; i++)
     // {
     //   vec[i] = {a[i], b[i]};
     // }

     // sort(vec.begin(), vec.end());

     sort(sorta.begin(), sorta.end());

     bool ans = true;

     for(ll i = 0;i<n;i++)
     {
       if(a[i]!= sorta[i])
       {
         // cout << i << "\n";
         if(b[i] ==0)
         {
            if(mapp1[sorta[i]]>0)
            {
              // mapp1[sorta[i]]--;

              for(ll j = i;j<n; j++)
              {
                if(a[j] == sorta[j] && b[j]==1)
                {
                  swap(a[i],a[j]);
                }
              }

              // continue;
            }
            else
            {
              ans = false;
            }
         }

         else
         {
           if(mapp0[sorta[i]]>0)
           {
             mapp0[sorta[i]]--;
             continue;
           }

           else
           {
             ans = false;
           }
         }

       }

       else
       {
         if(b[i]==0)
          mapp0[a[i]]--;

          else
            mapp1[a[i]]--;
       }

     }

     if(ans)
      cout <<"Yes\n";

    else
    cout <<"No\n";

	}
  return 0;
}

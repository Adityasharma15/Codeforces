#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);


        ll n,x,p;
        cin>>n>>x>>p;

  ll a=0;
  ll b=n;

      ll sm= x-1;
      ll lg= n-x;
    ll res=1;
    ll mod=1000000007;

        while(true)
        {
            ll md= (a+b)/2;


             if(md>p)
            {
              res*= lg;
              res%=mod;
              b=md;
              n--;
              lg--;
            }

            else if(md<p)
            {
              res*=sm;
              res%=mod;
              a=md+1;
              n--;
              sm--;
            }

               if(md==p)
            {
               n-=1;
        while(n>=2)
        {
          res=res*n;
          res%=mod;
          n--;
        }
        cout<<res%mod<<endl;
        break;
            }
            if(res==0 || sm<0 || lg<0)
            {
              cout<<0<<endl;
              break;
            }
        }

  return 0;

}

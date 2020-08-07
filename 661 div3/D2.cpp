#include<bits/stdc++.h>
#define ll long long
using namespace std;

int subsSeq(string s, int i,vector<int> & teams)
{
    vector<int>zO;
    vector<int>oZ;
    bool one=false;
    bool zero=false;

    for(int j=0;j<s.size();j++)
    {
        if(ans[j]!=0) continue;
        if(s[j]=='0' && one==false && zero==false)
        {
        zO.pb(j);
        zero=true;
        }
       else if(s[j]=='1' && zero && !one)
        {
            zO.pb(j);
            one=true;
            zero=false;
        }
        else if(s[j]=='0' && one && !zero)
        {
            zO.pb(j);
            one=false;
            zero=true;
        }

        if(s[j]=='1' && one==false && zero==false)
        {
        oZ.pb(j);
        one=true;
        }

        if(s[j]=='1' && zero && !one)
        {
            oZ.pb(j);
            one=true;
            zero=false;
        }

        if(s[j]=='0' && one && !zero)
        {
            oZ.pb(j);
            one=false;
            zero=true;

        }
    }

    one=false;
    zero=false;
    ll ret=0;
    if(zO.size()>oZ.size())
    {
      for(int k=0;k<zO.size();k++)
      {
          ans[zO[k]]=i;
      }
      ret=zO.size();
      return ret;
    }
    else
    {
      for(int k=0;k<oZ.size();k++)
      {
          ans[oZ[k]]=i;
      }
      ret=oZ.size();
      return ret;
    }
}

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
    string s;
    cin >> s;

    vector<ll> teams(n,0);

    ll i=1;
    ll val=0;

    while(val<n)
    {
      val+= subsSeq(s,i,ans);
      z=false;
      o=false;
      for(int k=0;k<n;k++)
      {
          if(teams[k]!=0) continue;
          if(s[k]=='0' ) z=true;
          if(s[k]=='1') o=true;
          if(o && z) break;
      }

      if(!z|| !o)
      {
          i++;
        for(int k=0;k<n;k++)
        {
            if(teams[k]==0)
            {
                teams[k]=i;
                i++;
            }
        }
        break;
      }
     i++;
    }
        cout<<i-1<<endl;
        for(i=0;i<teams.size();i++)
        cout<<teams[i]<<" ";
        cout<<endl;
	}
  return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  string s;
  cin >> s;

  string demo = "";
  ll len = s.length();

  for(ll i = 0 ; i<len; i++)
  {
    if(s[i]=='a')
      continue;

    demo+=s[i];
  }

  ll len2 = demo.length();
  bool ans = true;

  if(len2%2!=0)
  {
    ans = false;
    // break;
  }

  else
  {
    ll i = 0, j = len2/2;;

		while(j<len2)
		{
	  if(demo[i]!=demo[j])
    {
      ans = false;
    }
		i++;
		j++;
		}
  }

  if(ans)
  {
    for(ll i = len-1; i>=(len - len2/2); i--)
    {
      if(s[i]=='a')
      {
        ans = false;
      }
    }

  }


  if(!ans)
    cout<< ":(\n";

  else
  {
    for(ll i = 0; i<(len - (len2/2)); i++)
    {
      cout << s[i];
    }

    cout << "\n";
  }
  return 0;
}

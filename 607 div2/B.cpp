#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll findmin(string a, ll j, ll lena )
{
  ll minn = j;

  for(ll i = j+1;i<lena; i++)
  {
    if(a[i]<=a[minn])
    {
      minn = i;
    }
  }
  return minn==j?-1:minn;
}


int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

  bool tc = false;

	while(t--)
  {
		 string a , b;
     cin >> a >> b;
     ll lena = a.length(), lenb = b.length();

     ll i = 0, j = 0;

    if(a<b)
    {
      cout << a << "\n";
      continue;
    }

    bool possible = true;
    bool used = false;

    while(i<lena && j<lenb)
    {
        ll temp = findmin(a,i, lena);

        // if(a[temp] == b[j])
        // { swap(a[temp], a[i]);
        //   used = true;}

        if(a[i] > b[i])
        {
              if(used || temp==-1 || a[temp] > b[j])
              {
              possible = false;
              break;
              }

            else
            {
                if(a[temp] < b[j])
                {
                  possible = true;
                  swap(a[temp], a[i]);
                  break;
                }

                //if a[t  emp] == b[j];
                else
                {
                  swap(a[temp], a[i]);
                  used = true;
                }
            }
        }

      if(temp!=-1 && a[temp]<b[j] && !used)
      {
        swap(a[temp], a[i]);
        break;
      }

      i++;
      j++;
    }

    if(!possible || a>=b)
        cout << "---\n";

    else
      cout << a << "\n";
	}
  return 0;
}

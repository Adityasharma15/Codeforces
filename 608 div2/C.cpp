#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, schoola, schoolb;
  cin >> n >> schoola >> schoolb;
  // cout << n << schoola << schoolb << "first\n";

  ll pos1a = schoola-1, pos1b = schoolb;
  ll pos2a = schoola, pos2b = schoolb+1;
  ll pos3a = schoola+1, pos3b = schoolb;
  ll pos4a = schoola, pos4b = schoolb-1;

  ll pos1 = 0, pos2 =0, pos3 = 0, pos4 = 0;

  ll a ,b;
  for(ll i  = 0; i<n; i++)
  {
    // cout << i << "\n";
    cin >> a >> b;
    // cout << a << " " << b << "ab\n";

    if(a==schoola || b==schoolb)
    {
      if(a==schoola)
      {
        if(b>schoolb)
          pos2++;

        else
          pos4++;
      }

      else
      {
        if(a>schoola)
          pos3++;

        else
          pos1++;
      }

      // cout << pos1 << "  " << pos2 <<" " << pos3 <<" " << pos4 << "\n";
      continue;
    }

    a = a -schoola;
    b = b - schoolb;
    // cout << a << " " << b << "ab\n";

    if(a<0 && b<0)
    {
      pos1++;
      pos4++;
    }

    else if(a>0 && b>0)
    {
      pos2++;
      pos3++;
    }

    else if(a<0 && b>0)
    {
      // if(i==2)
      //   {
      //     cout << "gotcha\n";
      //     cout << a << " " << b << "\n";
      //   }
      pos1++;
      pos2++;
    }

    else if(a>0 && b<0)
    {

      pos3++;
      pos4++;
    }

    // cout << pos1 << "  " << pos2 <<" " << pos3 <<" " << pos4 << "\n";
  }

  if(pos1>pos2)
  {
    if(pos1>pos3)
    {
      if(pos1>pos4)
      {
        cout << pos1 << "\n";
        cout << pos1a <<" " << pos1b << "\n";
      }

      else
      {
        cout << pos4 << "\n";
        cout << pos4a <<" " << pos4b << "\n";
      }
    }

    else
    {
        if(pos4 > pos3)
        {
          cout << pos4 << "\n";
          cout << pos4a <<" " << pos4b << "\n";
        }

        else
        {
          cout << pos3 << "\n";
          cout << pos3a <<" " << pos3b << "\n";

        }
    }
  }
    else
    {
      if(pos2>pos3)
      {
        if(pos2>pos4)
        {
          cout << pos2 << "\n";
          cout << pos2a <<" " << pos2b << "\n";
        }

        else
        {
          cout << pos4 << "\n";
          cout << pos4a <<" " << pos4b << "\n";
        }
      }

      else
      {
          if(pos4 > pos3)
          {
            cout << pos4 << "\n";
            cout << pos4a <<" " << pos4b << "\n";
          }

          else
          {
            cout << pos3 << "\n";
            cout << pos3a <<" " << pos3b << "\n";

          }
      }

    }
    return 0;
  }

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

     if(n==1 || n==2)
     {
       cout << 1 <<"\n";
       continue;
     }

     if(n==3)
     {
       cout << 2 <<"\n";
       continue;
     }

     cout << n/2 <<"\n";

	}

  return 0;

}

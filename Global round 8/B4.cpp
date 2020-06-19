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

  vector<ll> arr(10,1);

  ll product = 1;

  ll i = 0;
  while(product<n)
  {
    product = 1;
    arr[i%10]++;

    for(ll j = 0; j <10; j++)
      {
        product*=arr[j];
      }

      // cout << product ;

    i++;
  }
  //
  // cout << "codeforces";

  while(arr[0]--)
  {
    cout << "c";
  }

  while(arr[1]--)
  {
    cout << "o";
  }

  while(arr[2]--)
  {
    cout <<"d";
  }

  while(arr[3]--)
  {
    cout <<"e";
  }
  while(arr[4]--)
  {
    cout <<"f";
  }

  while(arr[5]--)
  {
    cout <<"o";
  }

  while(arr[6]--)
  {
    cout <<"r";
  }

  while(arr[7]--)
  {
    cout <<"c";
  }
  while(arr[8]--)
  {
    cout <<"e";
  }
  while(arr[9]--)
  {
    cout <<"s";
  }

  return 0;

}

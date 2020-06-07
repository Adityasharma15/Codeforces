#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll tie, scarf, vest, jacket, costa , costb;
  cin >> tie >> scarf >> vest >> jacket >> costa >> costb;

  ll total1 = 0, total2 = 0, total = 0;
  ll mini = INT_MIN;

  if(costa > costb)
  {
    total1 = min(jacket, tie);
    jacket-=total1;
    total = total1*costa;

    mini = min(jacket,scarf);
    total2 = min(mini, vest);
    total = total + (total2*costb);
  }

  else
  {
    mini = min(jacket, scarf);
    total1 = min(mini, vest);
    total = total1*costb;
    jacket-=total1;

    total2 = min(jacket,tie);
    total = total + total2*costa;
  }

  cout << total << "\n";
  return 0;
}

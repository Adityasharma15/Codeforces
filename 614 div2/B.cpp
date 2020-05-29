#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

		 float  n;
     cin >> n;
     float ans = 0;

    while(n>0)
    {
      ans +=(1/n);
      n--;
    }

    printf("%.15f\n", ans);
    return 0;
}

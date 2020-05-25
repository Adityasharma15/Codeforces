#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, m;
	cin >> n >> m;

  vector<string> vec(n);
  set<string> sett;

  for(ll i= 0;i <n; i++)
  {
    cin >> vec[i];
    sett.insert(vec[i]);
  }

  string temp , temp1;
  vector<string> first;
  string mid;
  vector<string> second;

  for(auto i:vec)
  {
    temp = i;
    reverse(i.begin(), i.end());
    temp1 = i;

     if(temp == temp1)
        mid = temp;

      else if(sett.count(temp1) == 1)
        {
          sett.erase(temp1);
          sett.erase(temp);
          first.push_back(temp);
          second.push_back(temp1);
        }


  }

  cout << (m*(first.size()*2) + mid.length())<< "\n";
  reverse(first.begin() , first.end());

  for(auto i:first) cout << i;
  cout << mid;
  for(auto i:second) cout << i;

  cout << "\n";

  return 0;
}

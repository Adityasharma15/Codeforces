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
       ll x,y, o,p;
  		 cin>>x>>y;
  		 cin>>o>>p;

       ll add = x+y, addd = o+p;
       ll mini = min(x,y);

       if(add>=addd && mini>=p)
  		   cout<<"Yes\n";

       else
  		   cout<<"No\n";
  	}

    return 0;
  }

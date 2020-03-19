#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

	ll t;
	cin >> t;

	while(t--)
	{

        ll a, b, c, n;
        cin >>a >> b >> c >> n;

        bool flag = true;

        ll x = (a+b+c+n)/3;

        if(a>x || b>x || c>x || (a+b+c+n)%3!=0)
            flag = false;

        
        n=x-a;
        n=x-b;
        n=x-c;

//		if(n!=0)
//			flag = false;

        if(flag == true)
            cout << "YES" << "\n";
        
        else 
            cout << "NO" << "\n";


	}
}

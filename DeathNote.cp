#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n , m;
	cin >> n >> m;
	
	long long int ar[n];
	
	long long int buf=0 , page = 0;
	
	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
	    page = 0;
		buf+=ar[i];
		
		if(buf>=m)
		{
			page = buf/m; 
			buf = buf%m;
		}
		cout << page << " ";	
    }
	
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , m;
	cin >> n >> m;

    int ar[m+1] = {0};

    while(n--)
    {
    	int l , r;
    	cin >> l >> r;
    	
    	for(int i=l;i<=r;i++)
    	{
    		ar[i]++;
		}
    	
    }
    
    int count = 0;
    
    for(int i=1;i<m+1;i++)
    {
    	if(ar[i]==0)
    	count++;
	}
	
	cout << count << endl;
	
	for(int i=1;i<m+1;i++)
    {
    	if(ar[i]==0)
    	cout << i << " ";
	}
}

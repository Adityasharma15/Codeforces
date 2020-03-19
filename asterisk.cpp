#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int  sl, tl;
	cin >> sl >> tl;
	
	int check=0;
	
	if(sl>(tl+1))
    {   	
	cout << "NO" << endl;
	check=1;
	exit(1);
    }
	
	string s , t;
	cin >> s >> t;
	
	int j=0;
	
	
	
	if(check==0)
	
	{
	
	for(int i=0;i<tl;i++)
	{
		if(s[i]=='*' && check==0 )
		{
			i=i+(tl-sl) + 1;
			j++;
		}
		
		if(s[j]!=t[i] && check==0)
		{
			cout << "NO" << endl;
			check=1;
    	}
		
	j++;		
	}
	
  }
	
	if(check==0)
	{
	cout << "YES" << endl;
    }
}

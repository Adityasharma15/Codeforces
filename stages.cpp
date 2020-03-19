#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , k;
	cin >> n >> k;
	
	int ar[26]={0};
	
	string s;
	cin >> s;
	
	for(int i=0; i<n; i++)
    {
      	ar[(int)s[i]-'a']++;
	}	
	
	
	
	int w = 0 ,flag = -2 , count = 0 , check=0;
	
	for(int i=0;i<26;i++)
	{
		if(ar[i] > 0 &&  (i-flag) > 1 && check==0  )
		{
		    w=w+i+1;
			count++;
			flag = i;
		}
		
		if(count==k && check==0)
		{
			cout << w << endl;
			check=1;
		}
	}
	
	if(check==0)
	cout << "-1" << endl;
}

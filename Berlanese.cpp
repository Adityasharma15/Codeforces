#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int len = s.length() , check =0 , alert=0;
	
	for(int i = 0 ; i <=(len-1) ; i++)
	{
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='n')
		{   
		    alert = 1;
		    
		   	if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u')
		   	{
			    alert = 0;
		   		cout << "NO" << endl;
		   		check = 1;
		   		break;
			}
			
			else
			alert = 0;
		}	
	}
	
	if(check==0 && alert==0)
	cout << "YES" << endl;
	
	if(alert == 1)
	cout << "NO" << endl;
	
}

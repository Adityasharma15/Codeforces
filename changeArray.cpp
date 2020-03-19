#include<bits/stdc++.h>
using namespace std;

int main()
{
 int len;
 cin >> len;
 
 long long int ar[len];
 
 for(int i=0;i<len;i++)
 {
 	cin >> ar[i];
 }
	
	for(int i=0;i<len;i++)
	{
		if(ar[i]%2==0){		
			ar[i]=ar[i]-1;
		}
		
	}

	
	
	for(int i=0;i<len;i++)
	{
		cout << ar[i] << " ";
	}
}

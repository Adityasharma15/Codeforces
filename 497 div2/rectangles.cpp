#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long width[n] , height[n];
	int check=0;
	
	for(int i=0;i<n;i++)
	{
		cin >> width[i];
		cin >> height[i];
	}
	
	for(int i=0;i<(n-1);i++)
	{
		if(height[i+1] > height[i] && height[i+1] > width[i] ) 
		{
		   if(width[i+1] > height[i] && width[i+1] > width[i])
		   {
		   	check = 1;
		   	cout << "NO" << endl;
		   	break;
		   }
		}
	}
	
	if(check==0)
	cout << "YES" << endl;
	
	
	
}

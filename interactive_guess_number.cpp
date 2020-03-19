//interactive_guess_number.cpp

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	string s;
	ll f = 1, l = 1000000, mid;

	while(l!=f)
	{
		mid = (l + f +1)/2;

		cout << mid;
		cout << endl;
		char response[3];
        
        scanf("%s", response);
        
        if (strcmp(response, "<") == 0)
			l = mid - 1;

		else
			f = mid;

	} 

	cout << "! " << l;
	cout << endl;


}

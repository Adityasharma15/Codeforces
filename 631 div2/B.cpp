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
		 ll n;
     cin >> n;

      ll que[n];

      ll temp;

      bool flag = false;

      bool answer = false;
      ll anser;

      map<ll,ll> map1;
      map<ll,ll> map2;


      for(ll i = 0; i<n; i++)
      {
        cin >> temp;
        que[i] = temp;

        if(map1[temp]==0 && flag==false)
        {
            if(i==1)
            cout << "^";

          map1[temp]++;
          continue;
        }

        if(map1[temp]>0)
        {

              if(i==1)
              cout << "^";


          flag = true;
          //arr1[temp]++;
          map2[temp]++;

          if(map2[temp] >1)
          {
            answer = true;
            anser = 0;
          }
          continue;
        }

        if(flag == true)
        {
          if(i==1)
          cout << "^";
             map2[temp]++;
        }

        if(map1[temp]>1 || map2[temp] >1)
        {
          answer = true;
          anser = 0;
        }

      }

      // if(answer)
      // {
      //   cout << anser << "\n";
      // }

      ll sizemap1 = map1.size();


      for(auto i:map1)
      {
        if((i.first -  (i+1).first)!= 1)
          {
            answer = false;
            anser = 0;
          }
      }

      ll sizemap2 = map2.size();

      for(ll i =  1; i<(sizemap2 - 1); i++)
      {
        if(((map2[i+1]) - (map2[i]) )!= 1)
          {
            answer = false;
            anser = 0;
          }
      }


      if(answer)
        cout << anser << "\n";


        if(!answer)
        {
          ll count = 0;
          bool xcount = true;
            for(ll i = 0; i<n && xcount; i++)
            {
                if(map2[que[i]])
                  {count++;}

                else
                {
                  if(count < map2.size())
                  {
                    xcount = false;
                    anser = 1;
                    answer = true;;
                  }
                }
            }


            if(xcount)
            {
              if(count < map2.size())
              {
                anser = 1;
                answer = true;
              }
            }

            if(answer)
            {
              cout << anser << "\n";
              cout << map1.size() << " " << map2.size() << "\n";
            }

        }

        if(!answer)
        {
              cout << "2" << "\n";
              cout << map1.size() << " " << map2.size() << "\n";
              cout << map1.size() << " " << map1.size() << "\n";

        }

        cout << "\n";

        for(auto i: map1)
          cout << i.first;

          cout << "\n";

        for(auto i: map2)
          cout << i.first;

	}

}

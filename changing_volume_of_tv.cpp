#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>> t;
    
    while(t--)
    {
        ll a, b;

        cin >> a >> b;

        ll dif = abs(b-a);
        ll step = 0;
        //VOLUME CAN'T BE NEGATIVE

        if(dif>=5)
        {
            if(dif%5==0)
            {
                step += (dif/5);
                dif = 0;
            }   
             else
             {
                 ll x = dif - (dif%5);
                 step += x/5;
                 dif = dif%5;
             }
        }

        if(dif>=2)
        {
            if(dif%2==0)
            {
                step += (dif/2);
                dif = 0;
            }

             else
             {
                 ll x = dif - (dif%2);
                 step += x/2;
                 dif = dif%2;
             }
        }

        if(dif>=1)
        {
            if(dif%1==0)
            {
                step += (dif/1);
                dif = 0;
            }

             else
             {
                 ll x = dif - (dif%1);
                 step += x/1;
                 dif = dif%1;
             }
        }

        // while(dif!=0)
        // {
        //     if(abs(dif) >= 5)
        //     {
        //         if(dif >= 5)
        //         {
                    
        //             dif -= 5;
        //             step++;
        //         }   
        //     }

        //     else if(abs(dif) >= 2)
        //     {
        //         if(dif >= 2)
        //         {
        //             dif -= 2;
        //             step++;
        //         }   
        //     }

        //     else if(abs(dif) >= 1)
        //     {
        //         if(dif >= 1)
        //         {
        //             dif -= 1;
        //             step++;
        //         }   
        //     }

        // }

        cout << step<< "\n";

    }
}
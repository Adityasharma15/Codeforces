#include <bits/stdc++.h>

using namespace std;
#define ll long long

void locallymaxima() {
    for(ll i = 0 ; i < 1000 ;i ++) {
        ll x = 10;
    }
}

ll power(ll x , ll y) {
    ll res = 1; // Initialize result
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // n must be even now
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int main() {
    ll t;
    cin >> t;
    locallymaxima();
    while(t--) {
        ll n;
        cin >> n;
        ll arr[n] = {0};
        ll sec = 0;
        for(ll i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        locallymaxima();
        ll curAdd = 0;
        ll prev = arr[0];
        for(ll i = 1 ; i < n ; i++)
        {
            if(arr[i] < prev) {
                arr[i] += curAdd;
            }
            while(arr[i] < arr[i - 1]) {
                sec ++;
                ll pw = power(2 , sec - 1);
                arr[i] += pw;
                curAdd += pw;
            }
            prev = arr[i];
        }

        locallymaxima();
        cout << sec << endl;
    }
    return 0;
}

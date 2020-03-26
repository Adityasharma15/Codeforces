#include <bits/stdc++.h>
using namespace std;

int compare (const void *a, const void * b)
{
  return ( *(char *)a - *(char *)b );
}

void swap (char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
}

long long int findCeil (char str[], char first, long long int l, long long int h)
{
    long long int ceilIndex = l;
    for (long long int i = l+1; i <= h; i++)
    if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;

    return ceilIndex;
}

void sortedPermutations ( char str[], long long int k)
{
    long long int size = strlen(str);
    vector<string> v;

    qsort( str, size, sizeof( str[0] ), compare);

    bool isFinished = false;

    while ( ! isFinished )
    {
        v.push_back(str);

        if(v.size() > k)
          {
              cout << v[k-1] << "\n";
              break;
          }

        long long int i;
        for ( i = size - 2; i >= 0; --i )
        if (str[i] < str[i+1])
            break;

        // If there is no such character, all are
        // sorted in decreasing order, means we
        // just prlled the last permutation and we are done.
        if ( i == -1 )
            isFinished = true;
        else
        {
            // Find the ceil of 'first char' in
            // right of first character.
            // Ceil of a character is the smallest
            // character greater than it
            long long int ceilIndex = findCeil( str, str[i], i + 1, size - 1 );

            // Swap first and second characters
            swap( &str[i], &str[ceilIndex] );

            // Sort the string on right of 'first char'
            qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare );
        }
    }

    cout << v[k-1] << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

    long long int t;
    cin >> t;

    while(t--)
    {

    long long int n;
    long long int k;
    cin >> n >> k;

    string ss = "";

    for(long long int i = 0; i<n-2; i++)
      ss += 'a';

    ss += 'b';
    ss += 'b';

    char str[n];
    //strcpy(str, ss.c_str());

    for(int i = 0; i<(n-2); i++)
    {
      str[i] = 'a';
    }

    str[n-2] = 'b';
    str[n-1] = 'b';

    sortedPermutations( str, k );
    }
}

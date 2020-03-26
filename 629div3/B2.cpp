// C++ program to distinct permutations of the string
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Returns true if str[curr] does not matches with any of the
// characters after str[start]
bool shouldSwap(string str, int start, int curr)
{
	for (int i = start; i < curr; i++)
		if (str[i] == str[curr])
			return 0;
	return 1;
}

// Prints all distinct permutations in str[0..n-1]
void findPermutations(string str, int index, ll n, ll k)
{


  vector<string> v;

	if (index >= n) {
		//cout << str << endl;
    v.push_back(str);
		return;
	}

	for (int i = index; i < n; i++) {

		// Proceed further for str[i] only if it
		// doesn't match with any of the characters
		// after str[index]
		bool check = shouldSwap(str, index, i);
		if (check) {
			swap(str[index], str[i]);
			findPermutations(str, index + 1, n, k);
			swap(str[index], str[i]);
		}
	}

if(v.size()>k)
  cout << v[k-1] << "\n";

}

// Driver code
int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
  ll n,k;
  cin >> n >> k;

  string str = "";

  for(long long int i = 0; i<n-2; i++)
    str += 'a';

      str += 'b';
      str += 'b';


	//char str[] = "ABCA";

	findPermutations(str, 0, n, k);

  }
	return 0;
}

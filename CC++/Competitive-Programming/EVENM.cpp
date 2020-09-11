#include<bits/stdc++.h>
using namespace std;
#define ll long long
void start()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
  start();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int no = 0;
    int ro = 0;
    while (ro < n)
    {
      for ( int i = 1; i < n + 1 ; i++)
      {
        cout << (no + i) << " ";
      }
      ro++;
      no = no + n;
      cout << endl;
      if (ro == n)
        break;
      for ( int j = 0 ; j < n ; j++)
      {
        cout << (no + (n - j) ) << " ";
      }
      ro++;
      cout << endl;
      no += n;
    }
  }
  return 0;

}

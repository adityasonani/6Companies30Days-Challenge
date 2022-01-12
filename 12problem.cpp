// C++ find number of squares in a
// chessboard
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

  int n;
  cin>>n;
  cout << (n * (n + 1) / 2) * (2 * n + 1) / 3 << endl;
  return 0;
}

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set<long long> st;
	    ull num=1;
	    st.insert(1);
	   // n--;
	    while (n--) {
	        auto first = st.begin();
	        num = *first;
	        st.erase(first);
	        st.insert(num*2ll);
	        st.insert(num*3ll);
	        st.insert(num*5ll);
	    }
	    return num;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

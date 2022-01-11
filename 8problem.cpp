// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    int help(string str, int ind, vector<int> &dp) {
	        if (dp[ind]!=-1) {
	            return dp[ind]%1000000007;
	        }
	        if (str[ind]=='0') {
	            return dp[ind]=0;
	        }
	        int ways = (help(str, ind+1, dp))%1000000007;
	        if (ind+1 < str.length() && ((str[ind]=='1') || (str[ind]=='2' && str[ind+1]<'7'))) {
	            ways = (ways+help(str, ind+2, dp))%1000000007;
	        }
	        return dp[ind]=(ways%1000000007);
	    }
		int CountWays(string str){
		    int n=str.length();
		    vector<int> dp(n+1, -1);
		    dp[n]=1;
		    return help(str, 0, dp);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends

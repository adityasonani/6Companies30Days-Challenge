// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{
    string ans = "";
    ans+=src[0];
    int cnt=1;
    for (int i=1; i<src.length(); i++) {
        if (src[i]==src[i-1]) {
            cnt++;
        } else {
            ans+=to_string(cnt);
            ans+=src[i];
            cnt=1;
        }
    }
    if (cnt>0) {
        ans+=to_string(cnt);
    }
    return ans;
}
 

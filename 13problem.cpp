// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack<int> num;
        stack<string> chr;
        int k=0;
        string curr="";
        for (char &c: s) {
            if (isdigit(c)) {
                k = (k*10) + (c-'0');
            } else if (c>='a' && c<='z') {
                curr+=c;
            } else if (c=='[') {
                chr.push(curr);
                num.push(k);
                k=0;
                curr="";
            } else {
                int freq=num.top();
                num.pop();
                string tmp=curr;
                curr=chr.top();
                chr.pop();
                while (freq--) {
                    curr+=tmp;
                }
            }
        }
        return curr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends

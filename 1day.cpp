/*
question: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#

*/

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        /*
        act act act dgo dgo 
        */
        map<string, vector<string>> mp;
        for (string &s: string_list) {
            string tmp=s;
            sort(s.begin(), s.end());
            mp[s].push_back(tmp);
        }
        sort(string_list.begin(), string_list.end());
        vector<vector<string> > ans;
        for (auto &i: mp) {
            vector<string> tmp;
            for (string &s: i.second) {
                tmp.push_back(s);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
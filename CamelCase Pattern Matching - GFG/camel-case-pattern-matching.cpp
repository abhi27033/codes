//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> ans;
        sort(Dictionary.begin(),Dictionary.end());
        int y=Pattern.size();
        for(auto it:Dictionary)
        {
            string q="";
            for(auto ch:it)
            {
                if(isupper(ch)||ch==' ')
                q+=ch;
            }
            if(q.substr(0,y)==Pattern)
            ans.push_back(it);
        }
        vector<string>x;
        x.push_back("-1");
        return ans.size()==0?x:ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
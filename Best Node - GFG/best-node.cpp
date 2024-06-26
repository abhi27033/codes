//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long bestNode(int N, vector<int> &A, vector<int> &P) {
        set<int> s,b;
        for(auto it:P)
        s.insert(it);
        for(int i=1;i<=N;i++)
        if(s.find(i)==s.end())
        b.insert(i);
        long long ans=INT_MIN;
        for(auto it:b)
        {
          // cout<<it<<endl;
            int idx=it-1;
            long long s=0;
            while(1)
            {
                
                s*=-1;
                s+=A[idx];
                //cout<<s<<" ";
                ans=max(ans,s);
                if(P[idx]==-1)
                break;
                idx=P[idx]-1;
                
                
            }
            //cout<<endl;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        long long res = obj.bestNode(N, A, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
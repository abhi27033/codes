//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void reArrange(int arr[], int N) {
        // code here
        int i=0,j=1,x=N-1;
       while(i<N&&j<N)
       {
           if(arr[x]%2==0)
           {
               //cout<<"1\n";
               swap(arr[x],arr[i]);
               i+=2;
           }
           else
           {
               //cout<<"2\n";
               swap(arr[x],arr[j]);
               j+=2;
           }
        //     for(int ii=0;ii<N;ii++)
        // {
        //     cout<<arr[ii]<<" ";
        // }
        // cout<<endl;
       }
        
       
    }
};
//8 6 12 1 5 3


//{ Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
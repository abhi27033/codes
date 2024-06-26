//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int suf[n];
        int pre[n];
        suf[n-1]=a[n-1];
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        pre[i]=pre[i-1]+a[i];
        
        for(int i=n-2;i>=0;i--)
        suf[i]=suf[i+1]+a[i];
        // for(auto it:pre)
        // cout<<it<<" ";
        // cout<<endl;
        // for(auto it:suf)
        // cout<<it<<" ";
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(pre[i]==suf[i])
            return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
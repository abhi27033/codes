//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

// } Driver Code Ends
class Solution{
    public:
    //You need to complete this fucntion
    long long solve(int b,int p,int m)
    {
        if(p==1)
        return b%m;
        if(p%2==0)
        {
            long long a=solve(b,p/2,m)%m;
            a=(a*a)%m;
            return a;
        }
        else
        {
            long long a=solve(b,p/2,m)%m;
            a=(a*a)%m;
            a=(a*b)%m;
            return a;
        }
    }
    long long power(int N,int R)
    {
       //Your code here
        int q=0;
        int n=N;
        while(N)
        {
            int r=N%10;
            q=q*10+r;
            N/=10;
        }
        long long m=1000000007;
        return solve(n,q,m);
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends
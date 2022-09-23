// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        //_gcd(N,M) will give the Greatest common Divisor in Log(min(N,M)) time and N and M are the input 
        return (M+N)/__gcd(N,M);
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        long long N, M;
        cin >> N >> M;
        Solution obj;
        cout << obj.sum(N, M) << "\n";
    }
}
  // } Driver Code Ends
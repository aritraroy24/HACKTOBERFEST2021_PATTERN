// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> invIsoTriangle(int N) {
        // code here
        string str="";
        vector<string> ans;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<i;j++)
            str=str+' ';
            for(int j=i;j<2*N-1-i;j++)
            str=str+'*';
            for(int j=2*N-1-i;j<2*N-i-1;j++)
            str=str+' ';
            ans.push_back(str);
            str="";
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.invIsoTriangle(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}  // } Driver Code Ends
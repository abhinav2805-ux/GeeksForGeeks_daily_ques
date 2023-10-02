                                                                        // First and last occurrences of x




//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>ans;
        for(int i =0;i<n;i++){
            if(arr[i]== x) ans.push_back(i);
            if(arr[i]!= x){
                if(arr[i-1]==x) ans.push_back(i-1);
            }
        }
        if(ans.size()==0) return {-1,-1};
        vector<int>v (2);
        v[0] = ans[0];
        v[1] = ans[ans.size()-1];
        return v;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends

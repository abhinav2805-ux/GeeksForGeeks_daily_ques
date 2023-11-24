



                                                                                                //Pascal Triangle


class Solution{
   int mod = 1e9+7;
    vector<long long> solve(int n, vector<long long>prev){
        if(!n) return prev;
        vector<long long> cur(prev.size()+1, 1);
        for(int i = 1; i < prev.size(); i++)
            cur[i] = (prev[i] + prev[i-1])%mod;
        return solve(--n, cur);
    }
    
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        if(n==1) return {1LL*1};
        if(n==2) return {1LL*1, 1LL*1};
        return solve(n-2, {1LL*1, 1LL*1});
    }
};

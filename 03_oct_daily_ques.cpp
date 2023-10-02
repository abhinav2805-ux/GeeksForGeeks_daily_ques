
                                        //  Column name from a given column number//




class Solution{
    public:
    string colName (long long int n)
    {
       string ans = "";
        while(n>0){
            n--;
            int u = (n)%26 + 65;
            ans+=char(u);
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

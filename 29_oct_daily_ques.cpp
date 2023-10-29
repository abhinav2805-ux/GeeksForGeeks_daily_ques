



                                                                          //Check whether K-th bit is set or not

//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    string decimal_to_binary(int n){
    string res="";
   
    while(n>0){
        if(n%2==0){
            //even
            res="0"+res;
        }
        else{
            //odd
            res="1"+res;
          
        }
        n=n/2;
    }
  
    reverse(res.begin(),res.end());
    return res;
}
    
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        string ans = decimal_to_binary(n);
        return (ans[k]=='1')?true:false;
    }
};

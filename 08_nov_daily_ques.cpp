

                                                                    //Print Matrix in snake Pattern


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > arr)
    {   
      int m =arr.size();
      int n =arr.size();
      vector<int>ans;
      for(int i=0;i<m;i++){
    if(i%2==0){
        for(int j=0;j<n;j++){
            ans.push_back(arr[i][j]);
        }
    }
    else{
        for(int j=n-1;j>=0;j--){
             ans.push_back(arr[i][j]);
        }
    }
}
      return ans;
      
    }
};

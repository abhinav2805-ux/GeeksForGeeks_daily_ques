

                                                                          //Predict the Column
class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int n){
        int idx = -1;
        int k =-1;
          int ans = -1;
    int count =0;
for(int i=0;i<n;i++){
         k = i;
        count = 0;
    for(int j=0;j<n;j++){
        
        if(arr[j][i]== 0 ) count++;
        
    }
   
   if(count > ans){
       ans = count;
       idx = k;
   }

}
if(ans == 0 ) return -1;
return idx;
        
        
    }
};

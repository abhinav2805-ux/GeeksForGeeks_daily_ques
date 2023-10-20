




                                            //Form a number divisible by 3 using array digits





class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        
         long long sum =0;
       for(int i=0;i<N;i++)sum+=arr[i];
       if(sum%3==0) return 1;
       return 0;
        
    }
};

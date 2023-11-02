



                              //Minimum distance between two numbers

class Solution {
public:
    int minDist(int arr[], int n, int x, int y) {
            int indx1 = -1 , indx2 = -1;
        int ans = INT_MAX;
        for(int i = 0; i<n; i++)
        {
            if(arr[i] == x)
            {
                indx1 = i;
            }
            if(arr[i] == y)
            {
                indx2 = i;
            }
            if(indx1 != -1 && indx2 != -1)
               ans = min(ans , abs(indx1-indx2));
        }
        if(ans == INT_MAX)
          return -1;
        return ans; 
    }
};

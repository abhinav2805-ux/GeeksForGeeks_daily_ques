



                                                                                //Top K Frequent Elements in Array - |

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
       if(nums.size()==1) return nums;
        unordered_map<int,int>mp;
         vector<pair<int,int>>f;
        for(auto x : nums){
            mp[x]++;
        }
       
        for(auto x:mp){
          f.push_back({x.second,x.first});
        }
        sort(f.begin(),f.end());
        reverse(f.begin(),f.end());
        vector<int>ans;

        for(int i =0;i<k;i++){
            ans.push_back(f[i].second);
        }
        
    return ans;
      
      
    }
};

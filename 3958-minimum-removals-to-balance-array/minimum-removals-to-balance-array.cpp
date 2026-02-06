class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=n;
        int left=0;
        
       for(int right=0;right<n;right++){
           while((long long)nums[right]>(long long)nums[left]*k){
               left++;
           }
           ans=min(ans,n-(right-left+1));
       }
        return ans;
        
    }
};
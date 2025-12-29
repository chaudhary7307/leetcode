class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int left=0;
        int right=(n+1)/2;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=nums[left++];
            }
            else {
                ans[i]=nums[right++];
            }
        }
        return ans;
        
    }
};
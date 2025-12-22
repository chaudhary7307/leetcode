class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int h=n-i;
            if(nums[i]>=h)
            return h;
        }
        return 0;
    }
};
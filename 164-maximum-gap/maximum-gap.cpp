class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return 0;
        int maxi=INT_MIN;
        for(int i=1;i<n;i++){
            int diff=nums[i]-nums[i-1];
            maxi=max(maxi,diff);
        }
        return maxi;
    }
};
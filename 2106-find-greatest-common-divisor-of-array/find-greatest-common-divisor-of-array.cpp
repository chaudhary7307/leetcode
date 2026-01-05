class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int min=nums[0];
        int maxi=nums[n-1];
        int idx=INT_MIN;
        for(int i=1;i<=min;i++){
            if(min%i==0 && maxi%i==0){
                idx=max(idx,i);
            }

        }
        return idx;
        
    }
};
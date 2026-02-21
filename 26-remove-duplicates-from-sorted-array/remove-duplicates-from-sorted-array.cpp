class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
        int len=0;
        for(int i=1;i<n;i++){
            if(nums[len]!=nums[i]){
            len++;
            nums[len]=nums[i];
            }

        }
        return len+1;
        
    }
};
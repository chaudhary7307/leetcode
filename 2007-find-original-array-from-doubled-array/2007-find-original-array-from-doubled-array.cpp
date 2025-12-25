class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0) return {};
        sort(nums.begin(),nums.end());
        unordered_map<int,int>freq;
        for(int x: nums) freq[x]++;
        vector<int>ans;
        for(int x : nums){
            if(freq[x]==0) continue;
            if(freq[2*x]==0) return {};
            ans.push_back(x);
            freq[x]--;
            freq[2*x]--;
        }
        return ans;
        
        
    }
};
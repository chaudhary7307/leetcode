class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0, ans=0;
         mp[sum]=1;
        for(auto it:nums){
            sum=sum+it;
            int x=sum-k;
            if(mp.find(x)!=mp.end()){
                ans=ans+mp[x];
            }
            mp[sum]++;
        }
        return ans;
        
    }
};
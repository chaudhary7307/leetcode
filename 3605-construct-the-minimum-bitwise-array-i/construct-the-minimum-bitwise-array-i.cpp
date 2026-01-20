class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
       vector<int>ans;
       for(int p:nums){
        int len = __builtin_ctz(~p);
        if(len==0){
            ans.push_back(-1);
        }
        else{
            int x=p-(1<<(len-1));
            ans.push_back(x);
        }
       } 
       return ans;
    }
};
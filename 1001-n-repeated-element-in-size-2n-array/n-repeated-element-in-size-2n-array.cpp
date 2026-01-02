class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        unordered_map<int,int>mp;
        for(int ele :nums){
            mp[ele]++;
        }
        for(auto p :mp){
            if(n==2*p.second){
                x=p.first;
                break;
            }
        }
        return x;
    }
};
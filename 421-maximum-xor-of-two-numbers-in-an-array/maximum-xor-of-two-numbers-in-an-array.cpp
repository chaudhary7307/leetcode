class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
       int maxi=0;
       int mask=0;
       for(int bit=31; bit>=0; bit--){
        mask=mask|(1<<bit);
        unordered_set<int>s;
        for(int num:nums){
            s.insert(num & mask);
        }
         int candidate = maxi | (1 << bit);

        for(int prefix : s) {
            if(s.count(prefix ^ candidate)) {
                maxi = candidate;
                break;
            }
        }

       }
       return maxi;
        
    }
};
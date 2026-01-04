class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
              vector<int>ans;
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                    ans.push_back(j);
                    if(j!=nums[i]/j)
                    ans.push_back(nums[i]/j);
                }
            }
            if(ans.size()==4){
                for(int k=0;k<4;k++){
                    sum=sum+ans[k];
                }
            }
        }
        return sum;
    }
};
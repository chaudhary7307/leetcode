class Solution {
public:
    int reverseBits(int n) {
        long long ans=0;
        for(int i=31;i>=0;i--){
            if(n==0) break;
            else if(n%2==1)
            ans += pow(2,i);
            n /=2;

        }
        return ans;
        
    }
};
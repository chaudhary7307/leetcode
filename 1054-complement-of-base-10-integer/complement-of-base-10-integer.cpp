class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int result=0;
        int bitPosition=0;
        while(n!=0){
            int bit=(n&1)^1;
            result |= bit<<bitPosition;
            bitPosition++;
            n >>= 1;
        }
        return result;
        
    }
};
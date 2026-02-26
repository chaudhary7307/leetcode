class Solution {
public:
    int numSteps(string s) {
        int steps=0;
        bool hasCarry=false;
        int n=s.size();
        for(int i=n-1;i>0;i--){
            char currBit=s[i];
            if(hasCarry){
            if(currBit=='0'){
                currBit='1';
                hasCarry=false;
            }
            else {
                currBit='0';
            }
            }
            if(currBit=='1'){
                steps++;
                hasCarry=true;
            }
            steps++;

        }
        if(hasCarry){
            steps++;
        }
        return steps;
        
    }
};
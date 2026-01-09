class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxFreq=0;
        int left=0;
        int charFreq[26]={0};
        for(int right=0;right<n;right++){
            charFreq[s[right]-'A']++;
            maxFreq=max(maxFreq, charFreq[s[right]-'A']);
            if(right-left+1-maxFreq>k){
                charFreq[s[left]-'A']--;
                left++;
            }
        }
        return n-left;
    }
};
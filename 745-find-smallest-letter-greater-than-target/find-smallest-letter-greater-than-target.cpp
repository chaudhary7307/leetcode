class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char str=letters[0];
        for(int i=0;i<n;i++){
            if(letters[i]>target){
                str=letters[i];
                break;

            }
        }
        return str;
        
    }
};